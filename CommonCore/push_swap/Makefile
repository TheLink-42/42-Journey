# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 13:09:21 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/09/25 23:30:34 by jimmy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	$(addprefix srcs/commands/,				\
		push.c rev_rotate.c rotate.c swap.c)			\
	$(addprefix srcs/stack_utils/,				\
		add_back.c find_last.c new_node.c		\
		search_first.c search_last.c add_front.c)				\
	$(addprefix srcs/algorithm/,				\
		check.c init.c main.c sort_three.c sort.c	\
		sort_five.c)					

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) $(LIBFT)

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
