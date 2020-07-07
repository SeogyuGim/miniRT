/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vec_with_Vec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:03:51 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/07 11:12:07 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_vec3.h"

void    SetNumber_withVec(t_vec3 *this, t_vec *b)
{
    this->x = b->x;
    this->y = b->y;
    this->z = b->z;
}

void    Multiply_withVec(t_vec3 *this, t_vec *b)
{
    this->x *= b->x;
    this->y *= b->y;
    this->z *= b->z;
}

void    Add_withVec(t_vec3 *a, t_vec *b)
{
    a->x += b->x;
    a->y += b->y;
    a->z += b->z;
}

void    Divide_withvec(t_vec3 *a, t_vec *b)
{
    a->x /= b->x;
    a->y /= b->y;
    a->z /= b->z;
}
