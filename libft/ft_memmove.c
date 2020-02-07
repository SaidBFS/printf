/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 21:54:18 by saboufou          #+#    #+#             */
/*   Updated: 2019/10/30 02:55:33 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
	{
		dest = dest + len - 1;
		source = source + len - 1;
		while (len > 0)
		{
			*dest-- = *source--;
			len--;
		}
		return (dst);
	}
	while (len > 0)
	{
		*dest++ = *source++;
		len--;
	}
	return (dst);
}
