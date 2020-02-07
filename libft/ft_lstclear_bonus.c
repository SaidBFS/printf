/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:06:32 by saboufou          #+#    #+#             */
/*   Updated: 2019/11/12 16:06:34 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elmt_now;
	t_list	*elmt_next;

	if (lst && del)
	{
		elmt_now = *lst;
		elmt_next = *lst;
		while (elmt_next)
		{
			elmt_now = elmt_next;
			elmt_next = elmt_next->next;
			(*del)(elmt_now->content);
			free(elmt_now);
		}
		*lst = NULL;
	}
}
