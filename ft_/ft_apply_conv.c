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
    char *str;
    int i;

    if (c == 'c' || c == '%')
    {
        if (!(str = (char *)malloc(sizeof(char) * 2)))
            return;
        if (c == 'c')
            str[0] = data->type;
        else
            str[0] = '%';
        str[1] = '\0';
        ft_putchar_len(str[0], data);
    }
    else
    {
        i = 0;
        if (data->precision > 0)
            str = ft_strndup(va_arg(ap, char *), data->precision);
        else
            str = ft_strdup(va_arg(ap, char *));
        if (data->width <= data->precision)
        {
            while (str[i])
            {
                ft_putchar_len(str[i], data);
                i++;
            }
        }
        else
        {
            if (data->moins == 1)
            {
                while (str[i])
                {
                    ft_putchar_len(str[i], data);
                    i++;
                }
                while (i < data->width)
                {
                    ft_putchar_len(' ', data);
                    i++;
                }
            }
            else
            {
                while (i < (int)(data->width - ft_strlen(str)))
                {
                    ft_putchar_len(' ', data);
                    i++;
                }
                i = 0;
                while (i < (int)ft_strlen(str))
                {
                    ft_putchar_len(str[i], data);
                    i++;
                }
            }
        }
    }
}

void ft_apply_d_i_u(t_data *data, va_list ap, char c)
{
    char *str;
    int i;

    if (c == 'd' || c == 'i')
        str = ft_strdup(ft_itoa(va_arg(ap, int)));
    else
        str = ft_strdup(ft_itoa(va_arg(ap, unsigned int)));
    i = 0;
    if (data->width > data->precision)
    {
        if (data->precision == 0)
        {
            if (data->moins == 0)
            {
                while (i < (int)(data->width - ft_strlen(str)))
                {
                    ft_putchar_len(' ', data);
                    i++;
                }
            }
            i = 0;
            while(str[i])
            {
                ft_putchar_len(str[i], data);
                i++;
            }
            if (data->moins == 1)
            {
                while (i < (int)(data->width - ft_strlen(str)))
                {
                    ft_putchar_len(' ', data);
                    i++;
                }
            }
        }
        else
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
    }
    else
    {
        if (data->precision > (int)ft_strlen(str))
        {
            while (i < (int)(data->precision - ft_strlen(str)))
            {
                ft_putchar_len('0', data);
                i++;
            }
        }
        i = 0;
        while(str[i])
        {
            ft_putchar_len(str[i], data);
            i++;
        }
    }
}

void ft_apply_x_X(t_data *data, va_list ap, char c)
{
    char *s;
    int i;

    s = va_arg(ap, char *);
    i = 0;
    if (c == 'c')
    {
        ft_putchar_len(s[i], data);
        return;
    }
    while (s[i])
    {
        ft_putchar_len(s[i], data);
        i++;
    }
}

void ft_apply_p(t_data *data, va_list ap)
{
    char *s;
    int i;

    s = va_arg(ap, char *);
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