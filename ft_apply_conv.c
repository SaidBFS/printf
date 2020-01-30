/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:44:56 by saboufou          #+#    #+#             */
/*   Updated: 2019/12/06 02:31:11 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_apply_c_s_perc(t_data *data, va_list ap, char c)
{
    char    *s;
    int     i;

    s = va_arg(ap, char*);
    i = 0;
    if (c == 'c')
    {
        ft_putchar_len(s[i], data);
        return ;
    }
    else if (c == '%')
    {
        ft_putchar_len('%', data);
        return ;
    }
    while (s[i])
    {
        ft_putchar_len(s[i], data);
        i++;
    }
}

void ft_apply_d_i_u(t_data *data, va_list ap, char c)
{
    char    *s;
    int     i;

    s = va_arg(ap, char*);
    i = 0;
    if (c == 'c')
    {
        ft_putchar_len(s[i], data);
        return ;
    }
    while (s[i])
    {
        ft_putchar_len(s[i], data);
        i++;
    }
}

void ft_apply_x_X(t_data *data, va_list ap, char c)
{
    char    *s;
    int     i;

    s = va_arg(ap, char*);
    i = 0;
    if (c == 'c')
    {
        ft_putchar_len(s[i], data);
        return ;
    }
    while (s[i])
    {
        ft_putchar_len(s[i], data);
        i++;
    }
}

void ft_apply_p(t_data *data, va_list ap)
{
    char    *s;
    int     i;

    s = va_arg(ap, char*);
    i = 0;
    while (s[i])
    {
        ft_putchar_len(s[i], data);
        i++;
    }
}

void ft_apply_conv(char *str, t_data *data, va_list ap, int *i)
{
    if (str[*i] == 'c' || str[*i] == 's' || str[*i] == '%')
        ft_apply_c_s_perc(data, ap, str[*i]);
    if (str[*i] == 'd' || str[*i] == 'i' || str[*i] == 'u')
        ft_apply_d_i_u(data, ap, str[*i]);
    if (str[*i] == 'x' || str[*i] == 'X')
        ft_apply_x_X(data, ap, str[*i]);
    if (str[*i] == 'p')
        ft_apply_p(data, ap);
}