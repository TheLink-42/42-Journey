# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 13:09:21 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/09/19 11:54:06 by jimmy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	$(addprefix srcs/, )
OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -lft -L.$(LIBFT_PATH)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
