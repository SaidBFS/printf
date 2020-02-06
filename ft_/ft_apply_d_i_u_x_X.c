/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_d_i_u_x_X.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:20:08 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/04 20:20:14 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void width_sup_precis_zero(t_data *data, char *str, int i)
{
    if (data->precisionfound == 1)
        return;
    if (data->zero == 1)
    {
        while (i < (int)(data->width - ft_strlen(str)))
        {
            ft_putchar_len('0', data);
            i++;
        }
    }
    i = 0;
    if (data->moins == 0 && data->zero == 0)
    {
        while (i < (int)(data->width - ft_strlen(str)))
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
        while (i < (int)(data->width - ft_strlen(str)))
        {
            ft_putchar_len(' ', data);
            i++;
        }
    }
}

static void width_sup_precis_ok(t_data *data, char *str, int i)
{
    if (data->moins == 0)
    {
        while (i < (int)(data->width - data->precision))
        {
            ft_putchar_len(' ', data);
            i++;
        }
    }
    i = 0;
    while (i < (int)(data->precision - ft_strlen(str)))
    {
        ft_putchar_len('0', data);
        i++;
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
        while (i < (int)(data->width - data->precision))
        {
            ft_putchar_len(' ', data);
            i++;
        }
    }
}

static void precis_sup(t_data *data, char *str, int i, int neg)
{
    int len;

    if (neg == 1)
        len = (int)ft_strlen(str) - 1;
    else
        len = (int)ft_strlen(str);
    if (data->precision > len)
    {
        if (neg == 1)
            ft_putchar_len('-', data);
        while (i < (data->precision - len))
        {
            ft_putchar_len('0', data);
            i++;
        }
    }
    if (neg == 1 && data->precision > (int)ft_strlen(str))
        i = 1;
    else
        i = 0;
    while (str[i])
    {
        ft_putchar_len(str[i], data);
        i++;
    }
}

void ft_apply_d_i_u(t_data *data, va_list ap, char c)
{
    char *str;
    int neg;
    int i;

    neg = 0;
    if (c == 'd' || c == 'i')
    {
        str = ft_strdup(ft_itoa(va_arg(ap, int)));
        if (str[0] == '-')
            neg = 1;
    }
    else
        str = ft_strdup(ft_itoa_base(va_arg(ap, unsigned int), "0123456789"));
    i = 0;
    if (data->width > data->precision)
    {
        if (data->precision == 0)
            width_sup_precis_zero(data, str, i);
        else
            width_sup_precis_ok(data, str, i);
    }
    else
        precis_sup(data, str, i, neg);
}

void ft_apply_x_X(t_data *data, va_list ap, char c)
{
    char *str;
    unsigned long nb;
    int i;
    int neg;

    neg = 0;
    nb = va_arg(ap, unsigned long);
    if (c == 'x')
        str = ft_strdup(ft_itoa_base(nb, "0123456789abcdef"));
    else if (c == 'X')
        str = ft_strdup(ft_itoa_base(nb, "0123456789ABCDEF"));
    i = 0;
    if (data->width > data->precision)
    {
        if (data->precision == 0)
            width_sup_precis_zero(data, str, i);
        else
            width_sup_precis_ok(data, str, i);
    }
    else
        precis_sup(data, str, i, neg);
}