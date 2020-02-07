/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_diu_xx_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:05:11 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 18:40:18 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static void	width_sup_precis_zero_flag(t_data *data, char *str, int i)
{
	if (data->moins == 0 && data->zero == 0)
	{
		while (i < (int)(data->width - ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
	i = 0;
	if (str[0] == '-' && data->zero == 1)
		i = 1;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins == 1)
	{
		while (i < (int)(data->width - ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
}

void		width_sup_precis_zero(t_data *data, char *str, int i)
{
	if (str[0] == '0' && data->precisionfound == 1)
	{
		while (i < data->width)
		{
			ft_putchar_len(' ', data);
			i++;
		}
		return ;
	}
	if (data->zero == 1)
	{
		if (str[0] == '-')
			ft_putchar_len('-', data);
		while (i < (int)(data->width - ft_strlen(str)))
		{
			ft_putchar_len('0', data);
			i++;
		}
	}
	i = 0;
	width_sup_precis_zero_flag(data, str, i);
}

static void	width_sup_precis_ok_flag(t_data *data, char *str, int i, int nbz)
{
	while (i < nbz)
	{
		ft_putchar_len('0', data);
		i++;
	}
	if (str[0] == '-')
		i = 1;
	else
		i = 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins == 1)
	{
		while (i < (data->width - (int)ft_strlen(str) - nbz))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
}

void		width_sup_precis_ok(t_data *data, char *str, int i)
{
	int	nbz;

	if (str[0] == '-')
		nbz = data->precision - (int)ft_strlen(str) + 1;
	else
		nbz = data->precision - (int)ft_strlen(str);
	if (nbz < 0)
		nbz = 0;
	if (data->moins == 0)
	{
		while (i < (data->width - (int)ft_strlen(str) - nbz))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
	i = 0;
	if (str[0] == '-')
		ft_putchar_len('-', data);
	width_sup_precis_ok_flag(data, str, i, nbz);
}

void		precis_sup(t_data *data, char *str, int i, int neg)
{
	int	len;

	if (str[0] == '0' && data->precision == 0 && data->precisionfound == 1)
		return ;
	len = (int)ft_strlen(str);
	if (neg == 1)
		len = (int)ft_strlen(str) - 1;
	if (data->precision > len)
	{
		if (neg == 1)
			ft_putchar_len('-', data);
		while (i < (data->precision - len))
		{
			ft_putchar_len('0', data);
			i++;
		}
	}
	i = 0;
	if (neg == 1 && data->precision > len)
		i = 1;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
}
