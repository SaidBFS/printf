/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:50:53 by dzementz          #+#    #+#             */
/*   Updated: 2020/01/25 16:50:55 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, t_prtf *structprtf)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putprint(str[i], structprtf);
		i++;
	}
}
