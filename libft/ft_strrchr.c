/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:40:43 by loamar            #+#    #+#             */
/*   Updated: 2019/10/22 14:59:24 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		pos;

	pos = ft_strlen(s);
	if (s[pos] == c)
		return ((char*)(s + pos));
	while (pos > 0)
	{
		if (s[pos - 1] == c)
			return ((char*)(s + pos - 1));
		pos--;
	}
	return (0);
}
