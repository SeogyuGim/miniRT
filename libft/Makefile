# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 15:04:13 by seogkim           #+#    #+#              #
#    Updated: 2020/06/03 05:28:37 by seogkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

HEADER	= libft.h

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		  ft_isalpha.c ft_isascii.c ft_isprint.c ft_itoa.c \
		  ft_memccpy.c ft_memchr.c \
		  ft_memcmp.c ft_memcpy.c ft_memmove.c \
		  ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		  ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		  ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
		  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		  ft_tolower.c ft_toupper.c ft_isdigit.c \
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		  ft_lstiter.c ft_lstmap.c ft_lstsize.c \
		  ft_lstadd_front.c ft_lstlast.c ft_lstnew.c \
		  get_next_line.c \

PTF_SRC	= $(wildcard ft_printf/printf_srcs/*.c)

PTF_HDR	= $(ft_printf/incs/libftprintf.h)

OBJECT	= $(SRCS:.c=.o) $(PTF_SRC:.c=.o)

all: $(NAME)

$(NAME):
	@echo "creating Library..."
	@gcc -c -Wall -Werror -Wextra $(SRCS) -I $(HEADER) $(PTF_SRC) -I $(PTF_HDR)
	@ar rc $(NAME) $(OBJECT)
	@echo "done."

clean:
	@echo "clean..."
	@/bin/rm -rf *.o
	@echo "done."

fclean:
	@echo "fclean..."
	@/bin/rm -rf *.o
	@/bin/rm -rf $(NAME)
	@echo "done."

re: fclean all
