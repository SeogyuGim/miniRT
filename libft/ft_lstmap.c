/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:21:27 by seogkim           #+#    #+#             */
/*   Updated: 2020/03/03 19:43:34 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*newnode;

	if (!lst || !f)
		return (NULL);
	if (!(newnode = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	nlist = newnode;
	lst = lst->next;
	while (lst)
	{
		if (!(newnode = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&nlist, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&nlist, newnode);
	}
	return (nlist);
}
