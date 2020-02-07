/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:26:25 by saboufou          #+#    #+#             */
/*   Updated: 2019/10/30 02:12:48 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		chara;
	const unsigned char	*source;

	chara = c;
	i = 0;
	dest = dst;
	source = src;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == chara)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
