/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:44:56 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 18:40:40 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

int		ft_printf(const char *str, ...)
{
	int			i;
	int			len;
	va_list		ap;
	t_data		*data;

	va_start(ap, str);
	if (!(data = (t_data *)malloc(sizeof(t_data))))
		return (0);
	i = 0;
	data->len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_check_conv(str, i) == 0)
				return (0);
			ft_parsing(str, data, ap, &i);
			ft_apply_conv(str, data, ap, &i);
		}
		else
			ft_putchar_len(str[i], data);
		i++;
	}
	va_end(ap);
	len = data->len;
	free(data);
	return (len);
}
