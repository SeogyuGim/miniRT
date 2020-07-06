/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingRT.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:27:22 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/06 16:54:40 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ParsingRT.h"

int		fill_M(char *line, t_M *s)
{
	int		ret;

	ret = 0;
	spacepasser(&line);
	if (line[0] == 'R')
		ret = fillRes(ft_split(line, ' '), s);
	else if (line[0] == 'A')
		ret = fillAmbient(ft_split(line, ' '), s);
	else if (line[0] == 'c')
		ret = fillCamera(ft_split(line, ' '), s);
	else if (line[0] == 'l')
		ret = fillLight(ft_split(line, ' '), s);
	else if (ft_strncmp("pl", line, 2) == 0)
		ret = fillPlane(ft_split(line, ' '), s);
	else if (ft_strncmp("sp", line, 2) == 0)
		ret = fillSphere(ft_split(line, ' '), s);
	else if (ft_strncmp("sq", line, 2) == 0)
		ret = fillSquare(ft_split(line, ' '), s);
	else if (ft_strncmp("cy", line, 2) == 0)
		ret = fillCylinder(ft_split(line, ' '), s);
	else if (ft_strncmp("tr", line, 2) == 0)
		ret = fillTriangle(ft_split(line, ' '), s);
	return (ret);
}

int		parsingRT(t_M *s, char *path)
{
	int		fd;
	int		ret;
	char	*line;

	fd = open(path, O_RDONLY);
	while ((ret = get_next_line(fd, &line)) >= 0)
	{
		if (line[0] != ' ')
			if (fill_M(line, s) == -1)
			{
				write(1, "error\n", 6); // exitProgram();
				return (-1);
			}
		free(line);
		if (ret == 0)
			break ; 
	}
	line = 0;
	return (0);
}
