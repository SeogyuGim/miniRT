/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 00:33:00 by seogkim           #+#    #+#             */
/*   Updated: 2020/03/03 19:43:34 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	if (!(newnode = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
