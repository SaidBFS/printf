/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:04:16 by loamar            #+#    #+#             */
/*   Updated: 2019/10/22 16:37:57 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			pos;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	if (!dst && !src)
		return (NULL);
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	pos = 0;
	if (str_dst > str_src)
		while (0 < len)
		{
			str_dst[len - 1] = str_src[len - 1];
			len--;
		}
	else
		while (pos < len)
		{
			str_dst[pos] = str_src[pos];
			pos++;
		}
	return (dst);
}
