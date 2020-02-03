/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:22:01 by loamar            #+#    #+#             */
/*   Updated: 2019/10/21 19:22:46 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*first;

	if (!lst || !f)
		return (NULL);
	if (!(result = ft_lstnew((*f)(lst->content))))
		return (NULL);
	first = result;
	lst = lst->next;
	while (lst)
	{
		if (!((result->next) = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&first, (*del));
			return (NULL);
		}
		result = result->next;
		lst = lst->next;
	}
	return (first);
}
