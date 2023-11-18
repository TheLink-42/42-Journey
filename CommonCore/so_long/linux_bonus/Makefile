# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 08:18:10 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/11/16 12:52:55 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/,													\
			animation_idle.c animation_mov.c check.c ft_error.c ft_free.c 	\
			game_exit.c init_structs.c key.c load_image.c print_exit.c		\
			print_item.c print_map.c print_player.c print_wall.c			\
			read_map.c so_long.c)

OBJS = $(SRCS:.c=.o)

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=leak
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
