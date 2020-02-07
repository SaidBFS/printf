/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i_u_x_X_p.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:10:36 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 16:10:39 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void width_sup_precis_zero_flag(t_data *data, char *str, int i)
{
    if (data->moins == 0 && data->zero == 0)
    {
        while (i < (int)(data->width - ft_strlen(str)))
        {
            ft_putchar_len(' ', data);
            i++;
        }
    }
    if (str[0] == '-' && data->zero == 1)
        i = 1;
    else
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

void width_sup_precis_zero(t_data *data, char *str, int i)
{
    if (str[0] == '0' && data->precisionfound == 1)
    {
        while (i < data->width)
        {
            ft_putchar_len(' ', data);
            i++;
        }
        return;
    }
    if (data->zero == 1)
    {
        if (str[0] == '-')
            ft_putchar_len('-', data);
        while (i < (int)(data->width - ft_strlen(str)))
        {
            ft_putchar_len('0', data);
            i++;
        }
    }
    i = 0;
    width_sup_precis_zero_flag(data, str, i);
}

static void width_sup_precis_ok_flag(t_data *data, char *str, int i, int nombredezero)
{
    while (i < nombredezero)
    {
        ft_putchar_len('0', data);
        i++;
    }
    if (str[0] == '-')
        i = 1;
    else
        i = 0;
    while (str[i])
    {
        ft_putchar_len(str[i], data);
        i++;
    }
    i = 0;
    if (data->moins == 1)
    {
        while (i < (data->width - (int)ft_strlen(str) - nombredezero))
        {
            ft_putchar_len(' ', data);
            i++;
        }
    }
}

void width_sup_precis_ok(t_data *data, char *str, int i)
{
    int nombredezero;

    if (str[0] == '-')
        nombredezero = data->precision - (int)ft_strlen(str) + 1;
    else
        nombredezero = data->precision - (int)ft_strlen(str);
    if (nombredezero < 0)
        nombredezero = 0;
    if (data->moins == 0)
    {
        while (i < (data->width - (int)ft_strlen(str) - nombredezero))
        {
            ft_putchar_len(' ', data);
            i++;
        }
    }
    i = 0;
    if (str[0] == '-')
        ft_putchar_len('-', data);
    width_sup_precis_ok_flag(str, data, i, nombredezero);
}

void precis_sup(t_data *data, char *str, int i, int neg)
{
    int len;

    if (str[0] == '0' && data->precision == 0 && data->precisionfound == 1)
        return ;
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
    i = 0;
    if (neg == 1 && data->precision > len)
        i = 1;
    while (str[i])
    {
        ft_putchar_len(str[i], data);
        i++;
    }
}