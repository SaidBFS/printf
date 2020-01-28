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

void		get_flag(char *str, t_data *data, int *i)
{
	if(str[*i] == '-')
		data->flag = 1;
	else if(str[*i] == '0')
		data->flag = 2;
	*i = *i + 1;
}

void	get_width(char *str, t_data *data, va_list ap, int *i)
{
	if (str[*i] == '*')
		data->width = va_arg(ap, int);
	else
		data->width = ft_atoi(str + *i);
	*i = *i + 1;
}

void 	get_precision(char *str, t_data *data, va_list ap, int *i)
{
	if (str[*i] == '.')
	{
		*i = *i + 1;
		if (str[*i] == '*')
			data->precision = va_arg(ap, int);
		else
			data->precision = ft_atoi(str + *i);
	}
}

void	get_type(char *str, t_data *data, int *i)
{
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
