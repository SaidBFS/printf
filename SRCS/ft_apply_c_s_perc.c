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

static void width_sup_s(t_data *data, char *str, int i)
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

static void precis_sup_s(t_data *data, char *str, int i)
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

void ft_apply_s(t_data *data, va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (!str)
		str = ft_strdup("(null)");
	if (data->precisionfound)
		str = ft_strndup(va_arg(ap, char *), data);
	if (data->width < data->precision)
		precis_sup_s(data, str, 0);
	else
		width_sup_s(data, str, 0);
	if (data->precisionfound || !str)
		free(str);
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
	str[0] = '%';
	if (c == 'c')
		str[0] = va_arg(ap, int);
	str[1] = '\0';
	if (data->width > 0)
		width_sup_c_perc(data, str, 0);
	else
		ft_putchar_len(str[0], data);
	free(str);
}
