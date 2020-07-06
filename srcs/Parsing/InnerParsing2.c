/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InnerParsing2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:22:56 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/06 15:24:42 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ParsingRT.h"

int		fillSphere(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->SphereCenter)) == -1
		|| fillSubStruct(ft_split(str[3], ','), &(s->SphereColor)) == -1
		|| (s->SphereDiameter = ft_stod(str[2])) < 0)
		return (-1);
	return (0);
}

int		fillSquare(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->Square)) == -1
		|| fillSubStruct(ft_split(str[2], ','), &(s->SquareVec3)) == -1
		|| (s->SquareSideSize = ft_stod(str[3])) < 0
		|| fillSubStruct(ft_split(str[2], ','), &(s->SquareColor)) == -1)
		return (-1);
	return (0);
}

int		fillCylinder(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->Cylinder)) == -1
		|| fillSubStruct(ft_split(str[2], ','), &(s->CylinderVec3)) == -1
		|| (s->CylinderDiameter = ft_stod(str[3])) < 0
		|| (s->CylinderHeight = ft_stod(str[3])) < 0
		|| fillSubStruct(ft_split(str[2], ','), &(s->CylinderColor)) == -1)
		return (-1);
	return (0);
}

int		fillTriangle(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->Triangle1)) == -1
		|| fillSubStruct(ft_split(str[2], ','), &(s->Triangle2)) == -1
		|| fillSubStruct(ft_split(str[3], ','), &(s->Triangle3)) == -1
		|| fillSubStruct(ft_split(str[4], ','), &(s->TriangleColor)) == -1)
		return (-1);
	return (0);
}
