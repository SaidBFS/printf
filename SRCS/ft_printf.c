/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:44:56 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/11 13:24:45 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static int	ft_check_conv(const char *str, int i)
{
	i++;
	while (str[i])
	{
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
				|| str[i] == 'd' || str[i] == 'i'
				|| str[i] == 'u' || str[i] == 'x'
				|| str[i] == 'X' || str[i] == '%')
			return (1);
		i++;
	}
	return (0);
}

static void	ft_parsing(const char *str, t_data *data, va_list ap, int *i)
{
	*i = *i + 1;
	reset_struct(data);
	get_flag(str, data, i);
	get_width(str, data, ap, i);
	get_precision(str, data, ap, i);
	get_type(str, data, i);
}

static void	ft_apply_conv(const char *str, t_data *data, va_list ap, int *i)
{
	if (str[*i] == 'c' || str[*i] == '%')
		ft_apply_c_perc(data, ap, str[*i]);
	else if (str[*i] == 's')
		ft_apply_s(data, ap);
	else if (str[*i] == 'p')
		ft_apply_p(data, ap);
	else if (str[*i] == 'd' || str[*i] == 'i' || str[*i] == 'u'
			|| str[*i] == 'x' || str[*i] == 'X')
		ft_apply_diu_xx(data, ap, str[*i]);
}

void		ft_putchar_len(char c, t_data *data)
{
	write(1, &c, 1);
	data->len++;
}

int			ft_printf(const char *str, ...)
{
	int			i;
	va_list		ap;
	t_data		data;

	va_start(ap, str);
	i = 0;
	data.len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_check_conv(str, i) == 0)
				return (0);
			ft_parsing(str, &data, ap, &i);
			ft_apply_conv(str, &data, ap, &i);
		}
		else
			ft_putchar_len(str[i], &data);
		i++;
	}
	va_end(ap);
	return (data.len);
}
