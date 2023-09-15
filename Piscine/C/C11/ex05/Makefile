# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:51:09 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/08/28 19:06:29 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCDIR = ./srcs/
SRC = $(addprefix $(SRCDIR), do-op.c utils.c)

OBJ = $(SRC:.c=.o)

NAME = do-op

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
