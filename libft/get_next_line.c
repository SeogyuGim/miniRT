/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 20:50:19 by seogkim           #+#    #+#             */
/*   Updated: 2020/06/03 06:29:37 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <limits.h>

#define BUFFER_SIZE 10000

#define _ERROR -1
#define _EOF 0
#define NEWLINE 1

static int
	cutting(char **str, char **line, char **cut_ptr)
{
	char	*tmp;

	if (*cut_ptr)
	{
		*line = ft_substr(*str, 0, *cut_ptr - *str);
		tmp = ft_strdup(*cut_ptr + 1);
		free(*str);
		*str = tmp;
		return (NEWLINE);
	}
	if (*str)
	{
		*line = *str;
		*str = NULL;
	}
	else
		*line = ft_strdup("");
	return (_EOF);
}

int
	get_next_line(int fd, char **line)
{
	static char *str[OPEN_MAX];
	char		*tmp;
	char		*buff;
	int			byte;
	char		*cut_ptr;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line ||
			!(buff = (char*)malloc(BUFFER_SIZE + 1)))
		return (_ERROR);
	if (!str[fd])
		str[fd] = ft_strdup("");
	while ((cut_ptr = ft_strchr(str[fd], '\n')) == 0 &&
			(byte = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[byte] = '\0';
		tmp = str[fd] == NULL ? ft_strdup(buff) :
			ft_strjoin(str[fd], buff);
		if (str[fd] != 0)
			free(str[fd]);
		str[fd] = tmp;
	}
	free(buff);
	buff = NULL;
	if (byte < 0)
		return (_ERROR);
	return (cutting(&str[fd], line, &cut_ptr));
}
