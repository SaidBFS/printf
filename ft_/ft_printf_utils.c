/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:20:49 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/05 16:22:13 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_len(char c, t_data *data)
{
	write(1, &c, 1);
	data->len++;
}

int     ft_check_conv(char *str, int i)
{
    i++;
    while (str[i])
    {
        if (str[i] == 'c' || str[i] == 's' || str[i] == 'p' || str[i] == 'd'
            || str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X' 
            || str[i] == '%')
            return (1);
        i++;
    }
    return (0);
}

void ft_apply_conv(char *str, t_data *data, va_list ap, int *i)
{
    if (str[*i] == 'c' || str[*i] == '%')
        ft_apply_c_perc(data, ap, str[*i]);
    if (str[*i] == 's')
        ft_apply_s(data, ap);
    if (str[*i] == 'd' || str[*i] == 'i' || str[*i] == 'u')
        ft_apply_d_i_u(data, ap, str[*i]);
    if (str[*i] == 'x' || str[*i] == 'X')
        ft_apply_x_X(data, ap, str[*i]);
    if (str[*i] == 'p')
        ft_apply_p(data, ap);
}