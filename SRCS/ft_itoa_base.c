/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:27:56 by saboufou          #+#    #+#             */
/*   Updated: 2020/02/08 16:01:45 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libftprintf.h"

static	int		ft_len(unsigned long nb, int len_base)
{
	int	size;

	size = 0;
	while (nb > 0)
	{
		nb /= len_base;
		size++;
	}
	return (size);
}

static	char	*ft_div_mod(unsigned long nb, char *base)
{
	int		size;
	int		mod;
	int		len_base;
	char	*str;

	len_base = ft_strlen(base);
	size = ft_len(nb, len_base);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	size--;
	mod = 0;
	while (nb > 0)
	{
		mod = nb % len_base;
		str[size] = base[mod];
		nb /= len_base;
		size--;
	}
	return (str);
}

static	char	*ft_itoa_base_0(char *base)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	str[0] = base[0];
	str[1] = '\0';
	return (str);
}

char			*ft_itoa_base(unsigned long nb, char *base)
{
	if (nb == 0)
		return (ft_itoa_base_0(base));
	if (base == NULL)
		return (NULL);
	else
		return (ft_div_mod(nb, base));
}
