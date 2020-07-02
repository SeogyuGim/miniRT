/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:27:32 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/02 15:40:30 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/miniRT.h"

int		main(int ac, char *av[])
{
	if (ac == 2 && ft_strcmp(av[1] + ft_strlen(av[1]) - 3, ".rt") == 0)
		Render();
	else if (ac == 3 && ft_strcmp(av[2], "--save") && ft_strcmp(av[1] + ft_strlen(av[1]) - 3, ".rt") == 0)
		CreateBmpFile();
	else
		SendErrorMessage();
	return (0);
}
