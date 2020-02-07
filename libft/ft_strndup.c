/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:26:29 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/07 18:33:38 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*str;
	unsigned int	pos;

	pos = 0;
	if (n < ft_strlen(s1))
	{
		if (!(str = (char *)malloc(sizeof(char) * (n + 1))))
			return (NULL);
		while (pos < n)
		{
			str[pos] = s1[pos];
			pos++;
		}
		str[pos] = '\0';
		return (str);
	}
	if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (pos < ft_strlen(s1))
	{
		str[pos] = s1[pos];
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
