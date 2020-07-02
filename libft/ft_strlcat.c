/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 22:49:16 by seogkim           #+#    #+#             */
/*   Updated: 2020/02/24 22:49:16 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	cur;
	size_t	result;
	size_t	append_pos;

	cur = 0;
	while (dest[cur] != '\0')
		cur++;
	result = 0;
	while (src[result] != '\0')
		result++;
	if (size <= cur)
		result += size;
	else
		result += cur;
	append_pos = 0;
	while (src[append_pos] != '\0' && cur + 1 < size)
		dest[cur++] = src[append_pos++];
	dest[cur] = '\0';
	return (result);
}
