/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_diu_xx_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:48:29 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 18:46:09 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static void	print_p(t_data *data, char *str, int i)
{
	if (data->width > (int)ft_strlen(str) && data->moins == 0)
	{
		while (i < (data->width - (int)ft_strlen(str) - 2))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
	i = 0;
	ft_putchar_len('0', data);
	ft_putchar_len('x', data);
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->width > (int)ft_strlen(str) && data->moins == 1)
	{
		while (i < (data->width - (int)ft_strlen(str) - 2))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
}

void		ft_apply_p(t_data *data, va_list ap)
{
	void			*address;
	unsigned long	nb;
	char			*str;
	int				i;

	address = va_arg(ap, void *);
	nb = (unsigned long)address;
	str = ft_itoa_base(nb, "0123456789abcdef");
	i = 0;
	print_p(data, str, i);
	free(str);
}

void		ft_apply_d_i_u(t_data *data, va_list ap, char c)
{
	char	*str;
	int		neg;
	int		i;

	neg = 0;
	if (c == 'd' || c == 'i')
	{
		str = ft_strdup(ft_itoa(va_arg(ap, int)));
		if (str[0] == '-')
			neg = 1;
	}
	else
		str = ft_strdup(ft_itoa_base(va_arg(ap, unsigned int), "0123456789"));
	i = 0;
	if (data->width >= data->precision)
	{
		if (data->precision == 0)
			width_sup_precis_zero(data, str, i);
		else
			width_sup_precis_ok(data, str, i);
	}
	else
		precis_sup(data, str, i, neg);
	free(str);
}

void		ft_apply_x_x(t_data *data, va_list ap, char c)
{
	char			*str;
	unsigned long	nb;
	int				i;
	int				neg;

	neg = 0;
	nb = va_arg(ap, unsigned int);
	if (c == 'x')
		str = ft_strdup(ft_itoa_base(nb, "0123456789abcdef"));
	else
		str = ft_strdup(ft_itoa_base(nb, "0123456789ABCDEF"));
	i = 0;
	if (data->width > data->precision)
	{
		if (data->precision == 0)
			width_sup_precis_zero(data, str, i);
		else
			width_sup_precis_ok(data, str, i);
	}
	else
		precis_sup(data, str, i, neg);
	free(str);
}
