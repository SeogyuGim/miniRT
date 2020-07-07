/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 09:30:23 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/07 11:29:54 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VEC3_H
# define FT_VEC3_H

#include <math.h>
#include "miniRT.h"

typedef struct  s_vec3
{
    double  x;
    double  y;
    double  z;
}               t_vec3;

t_vec3  Vec_init(t_M *s);

void    SetNumber_withConst(t_vec3 *this, double d);
void    Multiply_withConst(t_vec3 *this, double d);
void    Add_withConst(t_vec3 *a, double d);
void    Divide_withConst(t_vec3 *a, double d);

void    SetNumber_withVec(t_vec3 *this, t_vec *b);
void    Multiply_withVec(t_vec3 *this, t_vec *b);
void    Add_withVec(t_vec3 *a, t_vec *b);
void    Divide_withVec(t_vec3 *a, t_vec *b);

double  Length_Vec(t_vec3 *this);
double  Distance_betweenVec(t_vec3 *a, t_vec3 *b);

#endif