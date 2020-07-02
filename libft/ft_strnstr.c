/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:12:55 by seogkim           #+#    #+#             */
/*   Updated: 2020/02/26 22:12:55 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		ln;

	if (*little == '\0')
		return ((char *)big);
	ln = ft_strlen((char*)little);
	while (*big != '\0' && len-- >= ln)
	{
		if (*big == *little && ft_memcmp(big, little, ln) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
