/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingRT_Utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:32:46 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/06 16:53:26 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ParsingRT.h"

void	spacepasser(char **s)
{
	while (**s == ' ')
		(*s)++;
}

double	ft_stod(char *s)
{
	char	**str;
	int		w;
	double	d;
	int		flag;

	flag = 1;
	if (s[0] == '-')
	{
		flag = -1;
		s++;
	}
	str = ft_split(s, '.');
	w = ft_atoi(str[0]);
	d = (double)ft_atoi(str[1]);
	while (d > 10.0)
		d /= 10;
	d /= 10;
	d += w;
	free(str);
	str = 0;
	return (d * flag);
}

int		fillSubStruct(char **str, t_c *p)
{
	p->x = ft_stod(str[0]);
	p->y = ft_stod(str[1]);
	p->z = ft_stod(str[2]);
	p->x = p->x < 0 ? 0 : p->x;
	p->y = p->x < 0 ? 0 : p->y;
	p->z = p->x < 0 ? 0 : p->z;
	return (0);
}
