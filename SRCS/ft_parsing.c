/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:31:40 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/09 19:24:54 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

void	get_flag(const char *str, t_data *data, int *i)
{
	if (str[*i] == '0')
		data->zero = 1;
	while (str[*i] == '0')
		*i = *i + 1;
	if (str[*i] == '-')
	{
		data->moins = 1;
		data->zero = 0;
	}
	while (str[*i] == '-' || str[*i] == '0')
		*i = *i + 1;
}

void	get_width(const char *str, t_data *data, va_list ap, int *i)
{
	if (str[*i] == '*')
	{
		data->width = va_arg(ap, int);
		if (data->width < 0)
		{
			data->moins = 1;
			data->zero = 0;
			data->width = data->width * (-1);
		}
		*i = *i + 1;
	}
	else
		data->width = ft_atoi(str + *i);
	while (str[*i] != 'c' && str[*i] != 's' && str[*i] != 'p' && str[*i] != 'd'
			&& str[*i] != 'i' && str[*i] != 'u' && str[*i] != 'x'
			&& str[*i] != 'X' && str[*i] != '%' && str[*i] != '.')
		*i = *i + 1;
}

void	get_precision(const char *str, t_data *data, va_list ap, int *i)
{
	if (str[*i] == '.')
	{
		*i = *i + 1;
		if (str[*i] == '*')
		{
			data->precision = va_arg(ap, int);
			*i = *i + 1;
		}
		else
			data->precision = ft_atoi(str + *i);
		if (data->precision >= 0)
		{
			data->precisionfound = 1;
			data->zero = 0;
		}
	}
}

void	get_type(const char *str, t_data *data, int *i)
{
	while (str[*i] != 'c' && str[*i] != 's' && str[*i] != 'p' && str[*i] != 'd'
			&& str[*i] != 'i' && str[*i] != 'u' && str[*i] != 'x'
				&& str[*i] != 'X' && str[*i] != '%')
		*i = *i + 1;
	data->type = str[*i];
}

void	ft_parsing(const char *str, t_data *data, va_list ap, int *i)
{
	*i = *i + 1;
	reset_struct(data);
	get_flag(str, data, i);
	get_width(str, data, ap, i);
	get_precision(str, data, ap, i);
	get_type(str, data, i);
}
