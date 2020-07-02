/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 03:50:57 by seogkim           #+#    #+#             */
/*   Updated: 2020/03/20 17:05:11 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_len_i(long long val)
{
	int		i;

	i = 0;
	while (val)
	{
		val /= 10;
		i++;
	}
	return (i);
}

char	*under_zero_i(int val, char *ret, int len)
{
	ret[len] = '\0';
	val = -1 * val;
	while (--len)
	{
		ret[len] = val % 10 + '0';
		val /= 10;
	}
	ret[0] = '-';
	return (ret);
}

char	*over_zero_i(int val, char *ret, int len)
{
	ret[len] = '\0';
	while (--len > -1)
	{
		ret[len] = val % 10 + '0';
		val /= 10;
	}
	return (ret);
}

char	*ft_itoa(int val)
{
	char	*ret;
	int		len;

	if (val == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (val == 0)
		return (ft_strdup("0"));
	else if (val < 0)
	{
		len = is_len_i(val) + 1;
		if (!(ret = (char*)malloc(sizeof(char) * len + 1)))
			return (NULL);
		ret = under_zero_i(val, ret, len);
	}
	else
	{
		len = is_len_i(val);
		if (!(ret = (char*)malloc(sizeof(char) * len + 1)))
			return (NULL);
		ret = over_zero_i(val, ret, len);
	}
	return (ret);
}
