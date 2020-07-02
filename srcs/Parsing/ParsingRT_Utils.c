/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingRT_Utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:32:46 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/02 17:33:10 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minirt.h"

void	spacepasser(char **s)
{
	while (**s == ' ')
		(*s)++;
}

double	ft_stod(char *s)
{
	int		w;
	double	d;
	int		minus;

	w = 0;
	minus = 1;
	if (*s == '-' && s++)
		minus = -1;
	while (ft_isdigit(*s))
		w = w * 10 + *s - '0';
	if (*s == '.')
		s++;
	d = 0.0;
	while (ft_isdigit(*s))
		d = d / 10 * 10 + *s - '0';
	d += w;
	return (d * minus);
}

int		fillSubStruct(char **str, t_c *p)
{
	p->x = ft_stod(str[0]);
	p->y = ft_stod(str[1]);
	p->z = ft_stod(str[2]);
	if (p->x < 0 || p->x < 0 || p->z < 0)
		return (-1);
	return (0);
}
