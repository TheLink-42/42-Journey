# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 19:48:36 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/08/27 23:24:08 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(addprefix ./, linkedlist.c input_check.c parser.c utils.c main.c)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean
