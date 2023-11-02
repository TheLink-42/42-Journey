# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 08:18:10 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/11/02 19:45:20 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, animation.c game_exit.c key.c print_player.c	\
		so_long.c ft_error.c image.c print_exit.c print_wall.c			\
		ft_free.c init_structs.c print_map.c read_map.c)

OBJS = $(SRCS:.c=.o)

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
LINKS = -framework OpenGL -framework AppKit
RM = rm -rf

#------------------------------------------------------------------------------#

LIBFT = libft.a
LIBFT_PATH = libft/
MLX = libmlx.a
MLX_PATH = mlx/

#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(LIBFT) $(MLX) $(OBJS)
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
