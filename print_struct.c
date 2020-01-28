/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:05:47 by saboufou          #+#    #+#             */
/*   Updated: 2020/01/22 13:05:50 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	reset_struct(t_data *data)
{
	data->type = 0;
	data->width = -1;
	data->precision = 0;
	data->flag = 0;
}

void	print_struct(t_data *data)
{
    printf("type = %c\nwidth = %d\nprecision = %d\nflag = %d", data->type,
			data->width, data->precision, data->flag);
}