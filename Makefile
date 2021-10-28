# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: unix <unix@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 14:16:17 by tyamcha           #+#    #+#              #
#    Updated: 2021/10/28 13:01:03 by unix             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

SRC_FILES = ft_printf.c ft_utils.c ft_str_utils.c ft_num_utils.c

OBJ = $(SRC_FILES:.c=.o)

HEADER = ft_printf.h
LIBC = ar -rc
LIBR = ranlib

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	make -C ./libft
	cp libft/libft.a ./
	$(LIBC) $(NAME) $(OBJ) 
	$(LIBR) $(NAME) 
	
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $< -o $@ 
	
clean:
	make clean -C ./libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./libft
	rm libft.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 