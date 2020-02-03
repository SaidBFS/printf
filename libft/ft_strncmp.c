/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:27:11 by loamar            #+#    #+#             */
/*   Updated: 2019/10/22 15:37:05 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	if (n != 0)
	{
		pos = 0;
		while ((s1[pos] != '\0' || s2[pos] != '\0') && pos < n)
		{
			if ((unsigned char)s1[pos] != (unsigned char)s2[pos])
				return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
			pos++;
		}
	}
	return (0);
}
