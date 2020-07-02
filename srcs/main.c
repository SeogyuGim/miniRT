/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:27:32 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/02 19:04:46 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/miniRT.h"

# define NORMAL 1
# define BMP 2

void	Render(int mode)
{
	mlx_new_window(
}

int		main(int ac, char *av[])
{
	if (ac == 2 && ft_strcmp(av[1] + ft_strlen(av[1]) - 3, ".rt") == 0)
		Render(NORMAL);
	else if (ac == 3 && ft_strcmp(av[2], "--save") && ft_strcmp(av[1] + ft_strlen(av[1]) - 3, ".rt") == 0)
		Render(BMP);
	else
		SendErrorMessage();
	return (0);
}
