/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:27:43 by loamar            #+#    #+#             */
/*   Updated: 2019/10/23 16:18:11 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	size_t				pos;

	if (len == 0)
		return (NULL);
	pos = 0;
	str = (unsigned char *)b;
	while (pos < len)
	{
		str[pos] = (unsigned char)c;
		pos++;
	}
	return (b);
}
