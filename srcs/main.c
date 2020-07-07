/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:27:32 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/07 11:27:20 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/miniRT.h"
#include "../incs/ParsingRT.h"

# define NORMAL 1
# define BMP 2

void	Render(int mode, char *path)
{
	t_M	s;

	ft_memset(&s, 0, sizeof(s));
	if (parsingRT(&s, path) == -1)
		return ;
	// if (mode == BMP)
	// 	return (CreateBmpFile(&s));
	s.mlx.mlx_ptr = mlx_init();
	s.mlx.win_ptr = mlx_new_window(s.mlx.mlx_ptr, s.Rx, s.Ry, path);
	if (raytracing(&s) == -1)
		return ; // SendErrorMessage();
	mlx_loop(s.mlx.mlx_ptr);
}

int		main(int ac, char *av[])
{
	if (ac == 2 && ft_strcmp(av[1] + ft_strlen(av[1]) - 3, ".rt") == 0)
		Render(NORMAL, av[1]);
	else if (ac == 3 && ft_strcmp(av[2], "--save") && ft_strcmp(av[1] + ft_strlen(av[1]) - 3, ".rt") == 0)
		Render(BMP, av[1]);
	else
		write(2, "Error\n", 7); // SendErrorMessage();
	return (0);
}
