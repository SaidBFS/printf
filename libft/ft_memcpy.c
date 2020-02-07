/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:05:26 by saboufou          #+#    #+#             */
/*   Updated: 2019/10/30 02:37:42 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*srcc;

	dest = dst;
	srcc = src;
	i = 0;
	if (!dest && !srcc)
		return (NULL);
	while (i < n)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dest);
}
