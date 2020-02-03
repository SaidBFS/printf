/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:01:15 by loamar            #+#    #+#             */
/*   Updated: 2019/10/22 14:42:03 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		pos;
	char		*str;

	if (!s)
		return (0);
	pos = 0;
	if (ft_strlen(s) < start)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (pos < len && s[start] != '\0')
	{
		str[pos] = s[start];
		pos++;
		start++;
	}
	str[pos] = '\0';
	return (str);
}
