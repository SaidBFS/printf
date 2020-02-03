/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:31:40 by saboufou          #+#    #+#             */
/*   Updated: 2020/01/22 14:31:41 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	get_flag(char *str, t_data *data, int *i)
{
	if (str[*i] == '0')
	{
		data->zero = 1;
		data->flag = 2;
	}
	while (str[*i] == '0')
		*i = *i + 1;
	if (str[*i] == '-')
	{
		data->moins = 1;
		data->zero = 0;
		data->flag = 1;
	}
	while (str[*i] == '-' || str[*i] == '0')
		*i = *i + 1;
}

void	get_width(char *str, t_data *data, va_list ap, int *i)
{
	int	j;

	if (str[*i] == '*')
		data->width = va_arg(ap, int);
	else
		data->width = ft_atoi(str + *i);
	j = ft_strlen(ft_itoa(data->precision));
	*i = *i + j;
}

void 	get_precision(char *str, t_data *data, va_list ap, int *i)
{
	int	j;

	if (str[*i] == '.')
	{
		*i = *i + 1;
		if (str[*i] == '*')
			data->precision = va_arg(ap, int);
		else
			data->precision = ft_atoi(str + *i);
		j = ft_strlen(ft_itoa(data->precision));
		*i = *i + j;
	}
}

void	get_type(char *str, t_data *data, int *i)
{
    while (str[*i] != 'c' && str[*i] != 's' && str[*i] != 'p' && str[*i] != 'd'
        && str[*i] != 'i' && str[*i] != 'u' && str[*i] != 'x' && str[*i] != 'X' 
        && str[*i] != '%')
    	*i = *i + 1;
	data->type = str[*i];
}

void    ft_parsing(char *str, t_data *data, va_list ap, int *i)
{
	*i = *i + 1;
	reset_struct(data);
	get_flag(str, data, i);
	get_width(str, data, ap, i);
	get_precision(str, data, ap, i);
	get_type(str, data, i);
	print_struct(data);
}
