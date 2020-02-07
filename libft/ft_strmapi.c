/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:22:32 by saboufou          #+#    #+#             */
/*   Updated: 2019/10/29 23:28:23 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fstr;
	int				s_len;

	if (f && s)
	{
		i = 0;
		s_len = ft_strlen(s);
		if (!(fstr = (char *)malloc(sizeof(char) * s_len + 1)))
			return (NULL);
		while (s[i])
		{
			fstr[i] = f(i, s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}
