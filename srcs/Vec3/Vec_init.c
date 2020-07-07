/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vec_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:18:27 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/07 11:30:28 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_vec3.h"

t_vec3  Vec_init(t_M *s)
{
    t_vec3  ret;

    ret.x = s->ViewPoint.x;
    ret.y = s->ViewPoint.y;
    ret.z = s->ViewPoint.z;
    return (ret);
}

// Distance between Vectors
double  Distance_betweenVec(t_vec3 *a, t_vec3 *b)
{
    return (
        sqrt(
            pow(a->x - b->x, 2) + 
            pow(a->y - b->y, 2) + 
            pow(a->z - b->z, 2)
        )
    );
}

// Length of Vector from 0,0,0.
double  Length_Vec(t_vec3 *this)
{
    return (
        sqrt(
            pow(this->x, 2) + 
            pow(this->y, 2) + 
            pow(this->z, 2)
        )
    );
}