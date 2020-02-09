/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:26:17 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/08 16:01:14 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static	char	*fill_s(char *s, long nb, int n, int i)
{
	while (i > 0)
	{
		s[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		s[i] = '-';
	else
		s[i] = nb % 10 + '0';
	return (s);
}

char			*ft_itoa(int n)
{
	long	nb;
	char	*s;
	int		i;

	i = 1;
	nb = n;
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	nb = n;
	if (n < 0)
		nb = nb * (-1);
	s[i] = '\0';
	i--;
	return (fill_s(s, nb, n, i));
}
