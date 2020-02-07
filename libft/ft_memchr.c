/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 23:00:26 by saboufou          #+#    #+#             */
/*   Updated: 2019/10/30 02:42:12 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chara;

	i = 0;
	str = (unsigned char *)s;
	chara = c;
	while (i < n)
	{
		if (str[i] == chara)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
