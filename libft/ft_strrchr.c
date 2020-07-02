/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 23:09:18 by seogkim           #+#    #+#             */
/*   Updated: 2020/02/24 23:09:18 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	int		i;
	char	*str;

	str = (char*)s;
	i = ft_strlen((char*)s) + 1;
	while (i--)
		if (*(str + i) == (unsigned char)ch)
			return (str + i);
	return (NULL);
}
