/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:14:13 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/09 14:29:38 by seogkim          ###   ########.fr       */
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
// SubStruct for parsing the map information.
typedef struct	s_xyzCoordinates
{
	double	x;
	double	y;
	double	z;
}				t_vec;
// Variables for function in mlx engine.
typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	int		*img_addr;
}				t_mlx;
// Total information.
typedef struct	s_MapInfo
{
// (1) resoulution : x render size, y render size
	int		Rx;
	int		Ry;
// (2) Ambient lightning
	double	AmbientLightRatio;
	t_vec		AmbientLightColor;
// (3) Camera
	t_vec		ViewPoint;
	t_vec		CameraVec3;
	int		FOV;
// (4) Light
	t_vec		LightPoint;
	double	BrightRatio;
	t_vec		LightColor;
// (5) Sphere
	t_vec		SphereCenter;
	double	SphereDiameter;
	t_vec		SphereColor;
// (6) Plane
	t_vec		Plane;
	t_vec		PlaneVec3;
	t_vec		PlaneColor;
// (7) Square
	t_vec		Square;
	t_vec		SquareVec3;
	double	SquareSideSize;
	t_vec		SquareColor;
// (8) Cylinder
	t_vec		Cylinder;
	t_vec		CylinderVec3;
	double	CylinderDiameter;
	double	CylinderHeight;
	t_vec		CylinderColor;
// (9) Triangle
	t_vec		Triangle1;
	t_vec		Triangle2;
	t_vec		Triangle3;
	t_vec		TriangleColor;
// (10) MLX
	t_mlx	mlx;
}				t_M;

int     raytracing(t_M *s);

#endif
