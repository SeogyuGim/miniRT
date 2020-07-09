/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raytracing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:53:00 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/09 16:16:12 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_vec3.h"
//#include "../../incs/ray.h"

int     get_pixelcolor(int x, int y)
{
    int     color;

    t_vec3  vec;

    vec = NewVector();
}

int     raytracing(t_M *s)
{
    int     endian;
    int     size_line;
    int     bits_per_pixel;
    int     i, j;

    s->mlx.img_ptr = mlx_new_image(s->mlx.mlx_ptr, s->Rx, s->Ry);
    s->mlx.img_addr = (int *)mlx_get_data_addr(s->mlx.img_ptr, &bits_per_pixel, &size_line, &endian);
    i = -1;
    while (++i < s->Ry)
    {
        j = -1;
        while (++j < s->Rx)
        {
            s->mlx.img_addr[i * s->Rx + j] = get_pixelcolor(i, j);
        }
    }
    mlx_put_image_to_window(s->mlx.mlx_ptr, s->mlx.win_ptr, s->mlx.img_ptr, 0, 0);
    return (0);
}
