/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_diu_xx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:55:04 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/11 13:22:55 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static void	precis_not_found_flag(t_data *data, char *str, int i, int neg)
{
	if (!data->moins && !data->zero)
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	i = (neg && data->zero) ? 1 : 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins)
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
}

void		precis_not_found(t_data *data, char *str, int i, int neg)
{
	if (data->zero)
	{
		if (neg)
			ft_putchar_len('-', data);
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len('0', data);
			i++;
		}
	}
	precis_not_found_flag(data, str, 0, neg);
}

static void	width_sup_flag(t_data *data, char *str, int nbz, int neg)
{
	int	i;

	i = 0;
	if (neg)
		ft_putchar_len('-', data);
	while (i < nbz)
	{
		ft_putchar_len('0', data);
		i++;
	}
	i = (neg) ? 1 : 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins)
		while (i < (data->width - (int)ft_strlen(str) - nbz))
		{
			ft_putchar_len(' ', data);
			i++;
		}
}

void		width_sup(t_data *data, char *str, int i, int neg)
{
	int	nbz;
	int	len;

	if (str[0] == '0' && !data->precision)
	{
		while (i < data->width)
		{
			ft_putchar_len(' ', data);
			i++;
		}
		return ;
	}
	len = (int)ft_strlen(str);
	if (neg)
		len = (int)ft_strlen(str) - 1;
	nbz = 0;
	if (data->precision > len)
		nbz = data->precision - len;
	if (!data->moins)
		while (i < (data->width - (int)ft_strlen(str) - nbz))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	width_sup_flag(data, str, nbz, neg);
}

void		precis_sup(t_data *data, char *str, int i, int neg)
{
	int	len;

	len = (int)ft_strlen(str);
	if (neg)
		len = (int)ft_strlen(str) - 1;
	if (data->precision > len)
	{
		if (neg)
			ft_putchar_len('-', data);
		while (i < (data->precision - len))
		{
			ft_putchar_len('0', data);
			i++;
		}
	}
	i = (neg && data->precision > len) ? 1 : 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
}
