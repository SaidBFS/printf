/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:20:49 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/09 16:59:07 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"
#include <stdio.h>

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
	printf("\n_________________________\n");
	printf("data->type = %c\n", data->type);
	printf("data->width = %d\n", data->width);
	printf("data->precision = %d\n", data->precision);
	printf("data->precisionfound = %d\n", data->precisionfound);
	printf("data->moins = %d\n", data->moins);
	printf("data->zero = %d\n", data->zero);
	printf("_________________________\n");
	fflush(stdout);
}

void	ft_putchar_len(char c, t_data *data)
{
	write(1, &c, 1);
	data->len++;
}

int		ft_check_conv(const char *str, int i)
{
	i++;
	while (str[i])
	{
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
				|| str[i] == 'd' || str[i] == 'i'
				|| str[i] == 'u' || str[i] == 'x'
				|| str[i] == 'X' || str[i] == '%')
			return (1);
		i++;
	}
	return (0);
}

void	ft_apply_conv(const char *str, t_data *data, va_list ap, int *i)
{
	if (str[*i] == 'c' || str[*i] == '%')
		ft_apply_c_perc(data, ap, str[*i]);
	else if (str[*i] == 's')
		ft_apply_s(data, ap);
	else if (str[*i] == 'd' || str[*i] == 'i' || str[*i] == 'u')
		ft_apply_d_i_u(data, ap, str[*i]);
	else if (str[*i] == 'x' || str[*i] == 'X')
		ft_apply_x_x(data, ap, str[*i]);
	else if (str[*i] == 'p')
		ft_apply_p(data, ap);
}

#define TEST "%010.s\n"
/*
int main()
{

	char *str;
	char *str1;
	char c;
	int d;
	int e;
	unsigned int u;

	d = 5155580;
	u = 1089855;
	c = 'f';
	e = 100;
	str = "yolo";
	str1 = "world";
	printf("=======MINE======\n");
	fflush(stdout);
	ft_printf(TEST, "ok");
	printf("=======VRAI======\n");
	printf(TEST, "ok");
	return (0);
}*/