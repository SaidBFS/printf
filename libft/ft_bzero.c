/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:27:09 by loamar            #+#    #+#             */
/*   Updated: 2019/10/22 13:05:22 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	pos;

	if (n != 0)
	{
		pos = 0;
		str = (char *)s;
		while (pos < n)
		{
			str[pos] = '\0';
			pos++;
		}
	}
}
