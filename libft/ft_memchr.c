/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:19:15 by loamar            #+#    #+#             */
/*   Updated: 2019/10/22 16:43:06 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			pos;

	if (n == 0)
		return (0);
	str = (unsigned char *)s;
	pos = 0;
	while (pos < n)
	{
		if (str[pos] == (unsigned char)c)
			return ((void *)(str + pos));
		pos++;
	}
	return (0);
}
