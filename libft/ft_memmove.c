/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:54:54 by seogkim           #+#    #+#             */
/*   Updated: 2020/02/24 20:54:54 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	if (!dest && !src)
		return (0);
	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	if (s < d)
		while (i++ < n)
			*(d + n - i) = *(s + n - i);
	else
		while (n--)
			*(d++) = *(s++);
	return (dest);
}
