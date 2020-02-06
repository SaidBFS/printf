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
	data->precisionfound = 0;
	data->moins = 0;
	data->zero = 0;
}

void	print_struct(t_data *data)
{
	printf("type = %c\n", data->type);
	printf("width = %d\n", data->width);
	printf("precision = %d\n", data->precision);
	printf("moins = %d\n", data->moins);
	printf("zero = %d\n", data->zero);
	fflush(stdout);
}

int	main()
{
//	unsigned int	qlf = 4294967295;
	ft_printf("ft_printf --> %1.2i\n", -1);
	printf("   printf --> %1.2i\n", -1);
	fflush(stdout);
	return (0);
}