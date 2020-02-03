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
	data->width = 0;
	data->precision = 0;
	data->flag = 0;
}

void	print_struct(t_data *data)
{
	printf("type = %c\n", data->type);
	printf("width = %d\n", data->width);
	printf("precision = %d\n", data->precision);
	printf("flag = %d\n", data->flag);
}

int	main()
{
//	char str[] = "hehehee";
	ft_printf("%c\n", 4);
	printf("%c%%\n", '4');
	return (0);
}