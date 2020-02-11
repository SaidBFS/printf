/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 00:52:23 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/09 16:18:33 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_data
{
	char	type;
	int		width;
	int		precision;
	int		precisionfound;
	int		len;
	int		moins;
	int		zero;
}					t_data;

int					ft_printf(const char *str, ...);
void				get_flag(const char *str, t_data *data, int *i);
void				get_width(const char *str, t_data *data,
						va_list ap, int *i);
void				get_precision(const char *str, t_data *data,
						va_list ap, int *i);
void				get_type(const char *str, t_data *data, int *i);
void				reset_struct(t_data *data);
void				ft_putchar_len(char c, t_data *data);
void				ft_apply_diu_xx(t_data *data, va_list ap, char c);
void				ft_apply_p(t_data *data, va_list ap);
void				ft_apply_c_perc(t_data *data, va_list ap, char c);
void				ft_apply_s(t_data *data, va_list ap);
void				precis_sup(t_data *data, char *str, int i, int neg);
void				width_sup(t_data *data, char *str, int i, int neg);
void				precis_not_found(t_data *data, char *str,
						int i, int neg);
int					ft_atoi(const char *str);
char				*ft_strdup(const char *src);
size_t				ft_strlen(const char *s);
char				*ft_itoa(int n);
char				*ft_itoa_base(unsigned long nb, char *base);

#endif
