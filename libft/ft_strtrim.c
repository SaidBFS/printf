/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 20:02:25 by saboufou          #+#    #+#             */
/*   Updated: 2019/11/12 16:17:45 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		index_start(char const *s1, char const *set)
{
	int	start;
	int	j;

	start = 0;
	j = 0;
	while (s1[start])
	{
		if (s1[start] != set[j])
			j++;
		if (set[j] == s1[start])
		{
			start++;
			j = 0;
		}
		else if (set[j] == '\0')
			break ;
	}
	return (start);
}

static	int		index_end(char const *s1, char const *set)
{
	int	j;
	int	end;
	int	start;

	j = 0;
	end = ft_strlen(s1);
	start = index_start(s1, set);
	while (end > start)
	{
		if (s1[end] != set[j])
			j++;
		if (set[j] == s1[end])
		{
			end--;
			j = 0;
		}
		else if (set[j] == '\0')
			break ;
	}
	return (end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		start;
	int		end;
	int		len;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	start = index_start(s1, set);
	end = index_end(s1, set);
	len = end - start + 2;
	if (!(dst = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	j = 0;
	while (start <= end)
	{
		dst[j] = s1[start];
		start++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
