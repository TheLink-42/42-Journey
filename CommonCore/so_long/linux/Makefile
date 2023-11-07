# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 08:18:10 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/11/07 15:16:33 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, game_exit.c key.c	so_long.c ft_error.c image.c \
		print_exit.c print_wall.c ft_free.c print_map.c read_map.c)

OBJS = $(SRCS:.c=.o)

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
LINKS = -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
RM = rm -rf

#------------------------------------------------------------------------------#

LIBFT = libft.a
LIBFT_PATH = libft/
MLX = libmlx.a
MLX_PATH = mlx/

#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)$(LIBFT) $(MLX_PATH)$(MLX) $(LINKS) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(MLX):
	make -C $(MLX_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	make -C $(MLX_PATH) clean
	$(RM) $(OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
