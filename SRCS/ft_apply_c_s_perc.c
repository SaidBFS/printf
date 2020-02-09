/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_c_s_perc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:08:59 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 18:39:27 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static void precis_ok_s(t_data *data, char *str, int i)
{
	if (!data->moins)
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	i = 0;
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

static void precis_tronque_s(t_data *data, char *str, int i)
{
	if (!data->moins)
		while (i < (data->width - data->precision))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	i = 0;
	while (i < data->precision)
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins)
		while (i < (data->width - data->precision))
		{
			ft_putchar_len(' ', data);
			i++;
		}
}

void ft_apply_s(t_data *data, va_list ap)
{
	char *str;
	char *null;

	str = va_arg(ap, char *);
	if (!str)
	{
		null = ft_strdup("(null)");
		if (data->precision >= 0 && data->precision < (int)ft_strlen(null)
				&& data->precisionfound)
			precis_tronque_s(data, null, 0);
		else
			precis_ok_s(data, null, 0);
		free(null);
	}
	else
	{
		if (data->precision >= 0 && data->precision < (int)ft_strlen(str)
				&& data->precisionfound)
			precis_tronque_s(data, str, 0);
		else
			precis_ok_s(data, str, 0);
	}
}

static void width_sup_c_perc(t_data *data, char *str, int i)
{
	if (data->zero)
		while (i < (data->width - 1))
		{
			ft_putchar_len('0', data);
			i++;
		}
	if (!data->zero && !data->moins)
		while (i < (data->width - 1))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	ft_putchar_len(str[0], data);
	i = 0;
	if (data->moins)
		while (i < (data->width - 1))
		{
			ft_putchar_len(' ', data);
			i++;
		}
}

void ft_apply_c_perc(t_data *data, va_list ap, char c)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return;
	if (c == 'c')
		str[0] = va_arg(ap, int);
	else
		str[0] = '%';
	str[1] = '\0';
	if (data->width > 0)
		width_sup_c_perc(data, str, 0);
	else
		ft_putchar_len(str[0], data);
	free(str);
}