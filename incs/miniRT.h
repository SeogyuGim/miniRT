/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:14:13 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/02 17:27:34 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../minilibx_opengl/mlx.h"
#include "../libft/libft.h"

typedef struct	s_xyzCoordinates
{
	double	x;
	double	y;
	double	z;
}				t_c;

typedef struct	s_MapInfo
{
// (1) resoulution : x render size, y render size
	int		Rx;
	int		Ry;
// (2) Ambient lightning
	double	AmbientLightRatio;
	t_rgb	AmbientLightColor;
// (3) Camera
	t_c		ViewPoint;
	t_c		CameraVec3;
	int		FOV;
// (4) Light
	t_c		LightPoint;
	double	BrightRatio;
	t_c		LightColor;
// (5) Sphere
	t_c		SphereCenter;
	double	SphereDiameter;
	t_c		SphereColor;
// (6) Plane
	t_c		Plane;
	t_c		PlaneVec3;
	t_c		PlaneColor;
// (7) Square
	t_c		Square;
	t_c		SquareVec3;
	double	SquareSideSize;
	t_c		SquareColor;
// (8) Cylinder
	t_c		Cylinder;
	t_c		CylinderVec3;
	double	CylinderDiameter;
	double	CylinderHeight;
	t_c		CylinderColor;
// (9) Triangle
	t_c		Triangle1;
	t_c		Triangle2;
	t_c		Triangle3;
	t_c		TriangleColor;
}				t_M;
#endif
