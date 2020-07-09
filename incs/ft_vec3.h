/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 09:30:23 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/09 16:26:34 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VEC3_H
# define FT_VEC3_H

#include <math.h>
#include "miniRT.h"

typedef struct  s_vec3
{
    double  e[3];
    double  point3[3];
    double  color3[3];
}               t_vec3;

t_vec3  NewVector(void);
t_vec3  NewVector_SetNum(double a, double b, double c);
double  x(t_vec3 *e);
double  y(t_vec3 *e);
double  z(t_vec3 *e);
void    operater_addConst(const double t, t_vec3 *vec);
void    operater_mulConst(const double t, t_vec3 *vec);
void    operater_divConst(const double t, t_vec3 *vec);
double  length(t_vec3 vec);
double  length_squared(t_vec3 vec);
void    operater_addVec(t_vec3 *v1, t_vec3 *v2);
void    operater_mulVec(t_vec3 *v1, t_vec3 *v2);
void    operater_divVec(t_vec3 *v1, t_vec3 *v2);
double  dot(t_vec3 *v1, t_vec3 *v2);
t_vec3  cross(t_vec3 *v1, t_vec3 *v2);
t_vec3  unit_vector(t_vec3 v);

#endif