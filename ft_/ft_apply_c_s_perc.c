/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_c_s_perc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:08:59 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 16:40:52 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	width_sup_s(t_data *data, char *str, int i)
{
	if (data->moins == 0)
	{
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
	i = 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins == 1)
	{
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
}

static void	precis_sup_s(t_data *data, char *str, int i)
{
	if (data->moins == 0)
	{
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
	i = 0;
	while (str[i])
	{
		ft_putchar_len(str[i], data);
		i++;
	}
	i = 0;
	if (data->moins == 1)
	{
		while (i < (data->width - (int)ft_strlen(str)))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
}

void		ft_apply_s(t_data *data, va_list ap)
{
	int		i;
	char	*str;

	if (data->precisionfound == 1)
		str = ft_strndup(va_arg(ap, char *), data->precision);
	else
		str = ft_strdup(va_arg(ap, char *));
	i = 0;
	if (data->width < data->precision)
		precis_sup_s(data, str, i);
	else
		width_sup_s(data, str, i);
}

static void	width_sup_c_perc(t_data *data, char *str, int i)
{
	i = 0;
	if (data->zero == 0 && data->moins == 0)
	{
		while (i < (data->width - 1))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
	ft_putchar_len(str[0], data);
	i = 0;
	if (data->moins == 1)
	{
		while (i < (data->width - 1))
		{
			ft_putchar_len(' ', data);
			i++;
		}
	}
}

void		ft_apply_c_perc(t_data *data, va_list ap, char c)
{
	char	*str;
	int		i;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return ;
	if (c == 'c')
		str[0] = va_arg(ap, int);
	else
		str[0] = '%';
	str[1] = '\0';
	i = 0;
	if (data->width > 0)
	{
		if (data->zero == 1)
		{
			while (i < (data->width - 1))
			{
				ft_putchar_len('0', data);
				i++;
			}
		}
		width_sup_c_perc(data, str, i);
	}
	else
		ft_putchar_len(str[i], data);
}
