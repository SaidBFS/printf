/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:47:08 by saboufou          #+#    #+#             */
/*   Updated: 2019/10/29 20:08:20 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total_size;

	total_size = count * size;
	if (!(dst = (char *)malloc(sizeof(char) * total_size)))
		return (NULL);
	return (ft_memset(dst, 0, total_size));
}
