/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raytracing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:53:00 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/07 14:56:49 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_vec3.h"
//#include "../../incs/ray.h"

int     raytracing(t_M *s)
{
    t_vec3  eye;
    int     rayi;

    eye = Vec_init(s);
    rayi = 0;
    while (rayi <= s->Rx)
    {
        mlx_put_pixel
    }
    return (0);
}
