# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 10:01:31 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/08/26 17:21:03 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR = srcs
INCDIR = includes

SRC = $(addprefix $(SRCDIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBNAME = libft.a

all: $(LIBNAME)

$(LIBNAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
