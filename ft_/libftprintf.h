/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 00:52:23 by saboufou          #+#    #+#             */
/*   Updated: 2019/12/06 01:35:04 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdarg.h>

typedef struct        s_data{
    char        type;
    int         flag;
    int         width;
    int         precision;
    int         len;
    int         moins;
    int         zero;
}               t_data;

int     ft_printf(char *, ...);
void    ft_parsing(char *str, t_data *data, va_list ap, int *i);
void	reset_struct(t_data *data);
void	print_struct(t_data *data);
void	ft_putchar_len(char c, t_data *data);
int     ft_check_conv(char *str, int i);
void    ft_apply_conv(char *str, t_data *data, va_list ap, int *i);

#endif
