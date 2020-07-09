/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vec_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:18:27 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/09 16:29:35 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_vec3.h"

t_vec3  NewVector(void)
{
    t_vec3  ret;

    ret.e[0] = 0;
    ret.e[1] = 0;
    ret.e[2] = 0;
    return (ret);
}

t_vec3  NewVector_SetNum(double a, double b, double c)
{
    t_vec3  ret;

    ret.e[0] = a;
    ret.e[1] = b;
    ret.e[2] = c;
    return (ret);
}

double  x(t_vec3 *e)
{
    return (e->e[0]);
}

double  y(t_vec3 *e)
{
    return (e->e[1]);
}

double  z(t_vec3 *e)
{
    return (e->e[2]);
}

void    operater_addConst(const double t, t_vec3 *vec)
{
    vec->e[0] += t;
    vec->e[1] += t;
    vec->e[2] += t;
}

void    operater_mulConst(const double t, t_vec3 *vec)
{
    vec->e[0] *= t;
    vec->e[1] *= t;
    vec->e[2] *= t;
}

void    operater_divConst(const double t, t_vec3 *vec)
{
    vec->e[0] /= t;
    vec->e[1] /= t;
    vec->e[2] /= t;
}

double  length(t_vec3 vec)
{
    return (sqrt(length_squared(vec)));
}

double  length_squared(t_vec3 vec)
{
    return (
        vec.e[0]*vec.e[0] +
        vec.e[1]*vec.e[1] +
        vec.e[2]*vec.e[2]
    );
}

void    operater_addVec(t_vec3 *v1, t_vec3 *v2)
{
    v1->e[0] += v2->e[0];
    v1->e[1] += v2->e[1];
    v1->e[2] += v2->e[2];
}

void    operater_mulVec(t_vec3 *v1, t_vec3 *v2)
{
    v1->e[0] *= v2->e[0];
    v1->e[1] *= v2->e[1];
    v1->e[2] *= v2->e[2];
}

void    operater_divVec(t_vec3 *v1, t_vec3 *v2)
{
    v1->e[0] /= v2->e[0];
    v1->e[1] /= v2->e[1];
    v1->e[2] /= v2->e[2];
}

double  dot(t_vec3 *v1, t_vec3 *v2)
{
    return (
        v1->e[0] * v2->e[0] + 
        v1->e[1] * v2->e[1] + 
        v1->e[2] * v2->e[2]
    );
}

t_vec3  cross(t_vec3 *v1, t_vec3 *v2)
{
    return (
        NewVector_SetNum(
            v1->e[1] * v2->e[2] - v1->e[2] * v2->e[1],
            v1->e[2] * v2->e[0] - v1->e[0] * v2->e[2],
            v1->e[0] * v2->e[1] - v1->e[1] * v2->e[0]
        )
    );
}

t_vec3  unit_vector(t_vec3 v)
{
    t_vec3  a;

    a = v;
    operater_divConst(length(a), &a);
    return (a);
}

