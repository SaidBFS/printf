/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:32:09 by saboufou          #+#    #+#             */
/*   Updated: 2019/11/01 19:36:54 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dst)
		return (NULL);
	len1 = 0;
	while (s1[len1])
	{
		dst[len1] = s1[len1];
		len1++;
	}
	len2 = 0;
	while (s2[len2])
		dst[len1++] = s2[len2++];
	dst[len1] = '\0';
	return (dst);
}
