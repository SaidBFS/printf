/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:09:39 by loamar            #+#    #+#             */
/*   Updated: 2019/10/13 19:48:02 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strndup(const char *s1, size_t n)
{
    char *str;
    unsigned int pos;

    pos = 0;
    if (n < ft_strlen(s1))
    {
        if (!(str = (char *)malloc(sizeof(*str) * (n + 1))))
            return (NULL);
		while (pos < n)
            {
                str[pos] = s1[pos];
                pos++;
            }
    }
    else
    {
        if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1))))
            return (NULL);
        while (pos < ft_strlen(s1))
        {
            str[pos] = s1[pos];
            pos++;
        }
    }
    str[pos] = '\0';
    return (str);
}