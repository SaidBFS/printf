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
	if (data->width > (int)ft_strlen(str) && !data->moins)
		while (i < (data->width - (int)ft_strlen(str) - 2))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	ft_putchar_len('0', data);
	ft_putchar_len('x', data);
	i = 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->width > (int)ft_strlen(str) && data->moins)
		while (i < (data->width - (int)ft_strlen(str) - 2))
		{
			ft_putchar_len(' ', data);
			i++;
		}
}

void		ft_apply_p(t_data *data, va_list ap)
{
	void			*address;
	unsigned long	nb;
	char			*str;

	address = va_arg(ap, void *);
	nb = (unsigned long)address;
	str = ft_itoa_base(nb, "0123456789abcdef");
	print_p(data, str, 0);
	free(str);
}

void		ft_apply_d_i_u(t_data *data, va_list ap, char c)
{
	char	*str;
	int		neg;

	neg = 0;
	if (c == 'd' || c == 'i')
	{
		str = ft_itoa(va_arg(ap, int));
		if (str[0] == '-')
			neg = 1;
	}
	else
		str = ft_itoa_base(va_arg(ap, unsigned int), "0123456789");
	if (data->width >= data->precision)
	{
		if (!data->precision)
			width_sup_precis_zero(data, str, 0);
		else
			width_sup_precis_ok(data, str, 0);
	}
	else
		precis_sup(data, str, 0, neg);
	free(str);
}

void		ft_apply_x_x(t_data *data, va_list ap, char c)
{
	char			*str;
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	if (c == 'x')
		str = ft_itoa_base(nb, "0123456789abcdef");
	else
		str = ft_itoa_base(nb, "0123456789ABCDEF");
	if (data->width > data->precision)
	{
		if (!data->precision)
			width_sup_precis_zero(data, str, 0);
		else
			width_sup_precis_ok(data, str, 0);
	}
	else
		precis_sup(data, str, 0, 0);
}
