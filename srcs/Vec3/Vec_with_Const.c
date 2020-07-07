/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vec_with_Const.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:03:39 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/07 14:53:54 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_vec3.h"

void    SetNumber_withConst(t_vec3 *this, double d)
{
    this->x = d;
    this->y = d;
    this->z = d;
}

void    Multiply_withConst(t_vec3 *this, double d)
{
    this->x *= d;
    this->y *= d;
    this->z *= d;
}

void    Add_withConst(t_vec3 *a, double d)
{
    a->x += d;
    a->y += d;
    a->z += d;
}

void    Divide_withConst(t_vec3 *a, double d)
{
    a->x /= d;
    a->y /= d;
    a->z /= d;
}
