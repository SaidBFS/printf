/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:07:33 by saboufou          #+#    #+#             */
/*   Updated: 2019/11/12 16:07:35 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*first_list;

	if (!lst || !f)
		return (NULL);
	if (!(new_list = ft_lstnew((*f)(lst->content))))
		return (NULL);
	first_list = new_list;
	lst = lst->next;
	while (lst)
	{
		if (!(new_list->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&first_list, (*del));
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (first_list);
}
