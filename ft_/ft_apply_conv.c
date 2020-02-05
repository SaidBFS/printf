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

static void print_p(t_data *data, char *str, int i)
{
    if (data->width > (int)ft_strlen(str) && data->moins == 0)
    {
       while (i < (data->width - (int)ft_strlen(str) - 2))
       {
          ft_putchar_len(' ', data);
          i++;
       }
    }
    i = 0;
    ft_putchar_len('0', data);
    ft_putchar_len('x', data);
    while (str[i])
    {
       ft_putchar_len(str[i], data);
       i++;
    }
    i = 0;
    if (data->width > (int)ft_strlen(str) && data->moins == 1)
    {
        while (i < (data->width - (int)ft_strlen(str) - 2))
        {
           ft_putchar_len(' ', data);
           i++;
        }
    }
}

void ft_apply_p(t_data *data, va_list ap)
{
   void *address;
   unsigned long nb;
   char    *str;
   int      i;

    address = va_arg(ap, void *);
    nb = (unsigned long)address;
    str = ft_itoa_base(nb, "0123456789abcdef");
    i = 0;
    print_p(data, str, i);
}