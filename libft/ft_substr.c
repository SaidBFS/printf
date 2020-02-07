/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:11:41 by saboufou          #+#    #+#             */
/*   Updated: 2019/11/01 19:53:39 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		len = 0;
		if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		dst[i] = '\0';
		return (dst);
	}
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] && i < len)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
