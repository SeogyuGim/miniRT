/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:15:17 by seogkim           #+#    #+#             */
/*   Updated: 2020/04/06 18:06:47 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	char			*ret;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char*)s);
	ret = (char*)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		ret[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	ret[idx] = '\0';
	return (ret);
}
