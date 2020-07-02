# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/01 13:01:29 by seogkim           #+#    #+#              #
#    Updated: 2020/07/01 13:23:31 by seogkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= miniRT

SRCS	= $(wildcard srcs/*.c)

INCS	= $(wildcard incs/*.h)

OBJT	= $(SRCS:.c=.o)

MLX		= minilibx_opengl

LXFLAGS	= -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME):
	@echo "creating excutable file..."
	@gcc -o $(NAME) -L $(MLX) $(LXFLAGS) -L libft $(SRCS)
	@echo "done!"

clean:
	@echo "clean start..."
	@/bin/rm $(OBJT)
	@echo "done!"

fclean:
	@echo "fclean start..."
	@/bin/rm -rf $(OBJT)
	@/bin/rm -rf $(NAME)
	@echo "done!"

re:	fclean all
