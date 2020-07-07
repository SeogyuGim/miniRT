# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seogkim <seogkim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/01 13:01:29 by seogkim           #+#    #+#              #
#    Updated: 2020/07/07 14:53:13 by seogkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= miniRT

SRCS	= srcs/main.c \
		  srcs/Parsing/InnerParsing1.c \
		  srcs/Parsing/InnerParsing2.c \
		  srcs/Parsing/ParsingRT.c \
		  srcs/Parsing/ParsingRT_Utils.c \
		  srcs/Vec3/Vec_init.c \
		  srcs/Vec3/Vec_with_Const.c \
		  srcs/Vec3/Vec_with_Vec.c \
		  srcs/Ray/ft_raytracing.c \

INCS	= incs/

OBJT	= $(SRCS:.c=.o)

MLX		= minilibx_opengl

MLX_FLAGS	= -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME):
	@echo "creating excutable file..."
	@gcc -o $(NAME) -L $(MLX) $(MLX_FLAGS) -L libft -lft -I $(INCS) $(SRCS) -g3 -fsanitize=address
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
