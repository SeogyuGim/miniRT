/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InnerParsing1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:29:47 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/02 17:26:39 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ParsingRT.h"

int		fillRes(char **str, t_M *s)
{
	s->Rx = ft_atoi(str[1]);
	s->Ry = ft_atoi(str[2]);
	if(s->Rx < 0 || s->Ry < 0)
		return (-1);
	return (0);
}

int		fillAmbient(char **str, t_M *s)
{
	s->AmbientLightRatio = ft_stod(str[1]);
	if (fillSubStruct(ft_split(str[2], ','), &(s->AmbientLightColor)) == -1)
		return (-1);
	return (0);
}

int		fillCamera(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->ViewPoint)) == -1
		|| fillSubStruct(ft_split(str[2], ','), &(s->CameraVec3)) == -1
		|| (s->FOV = ft_stod(str[3])) < 0)
		return (-1);
	return (0);
}

int		fillLight(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->LightPoint)) == -1
		|| (s->BrightRatio = ft_stod(str[2])) < 0
		|| fillSubStruct(ft_split(str[3], ','), &(s->LightColor)) == -1)
		return (-1);
	return (0);
}

int		fillPlane(char **str, t_M *s)
{
	if (fillSubStruct(ft_split(str[1], ','), &(s->Plane)) == -1
		|| fillSubStruct(ft_split(str[2], ','), &(s->PlaneVec3)) == -1
		|| fillSUbStruct(ft_split(str[3], ','), &(s->PlaneColor)) == -1)
		return (-1);
	return (0);
}
