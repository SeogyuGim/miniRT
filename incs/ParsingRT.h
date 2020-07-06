/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingRT.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:25:30 by seogkim           #+#    #+#             */
/*   Updated: 2020/07/06 16:55:14 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGRT_H
# define PARSINGRT_H

#include "miniRT.h"

// ParsingRT
int     parsingRT(t_M *s, char *path);
int		fill_M(char *line, t_M *s);
// InnerParsing1
int		fillRes(char **str, t_M *s);
int		fillAmbient(char **str, t_M *s);
int		fillCamera(char **str, t_M *s);
int		fillLight(char **str, t_M *s);
int		fillPlane(char **str, t_M *s);
// InnerParsing2
int		fillSphere(char **str, t_M *s);
int		fillSquare(char **str, t_M *s);
int		fillCylinder(char **str, t_M *s);
int		fillTriangle(char **str, t_M *s);
// ParsingRT_Utils
void	spacepasser(char **s);
double	ft_stod(char *s);
int		fillSubStruct(char **str, t_c *p);

#endif
