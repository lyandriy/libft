# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 16:28:08 by lyandriy          #+#    #+#              #
#    Updated: 2022/09/21 20:36:13 by lyandriy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_memset.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_memmove.c \
	  ft_strlen.c \
	  ft_strlcpy.c\
	  ft_memmove\

OBJ = $(SRC:.c=.o)

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all