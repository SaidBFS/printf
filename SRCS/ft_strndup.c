/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:26:29 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/08 16:03:09 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static void		*ft_s_null(t_data *data)
{
	char	*null;

	null = ft_strdup("(null)");
}

char		*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char *ft_strndup(const char *src, t_data *data)
{
	char *dst;
	char *null;
	int i;

	i = 0;
	if (data->precision < (int)ft_strlen(src))
	{
		if (!(dst = (char *)malloc(sizeof(char) * (data->precision + 1))))
			return (NULL);
		while (i < data->precision)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
		dst = ft_strdup(src);
	return (dst);
}