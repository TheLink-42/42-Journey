# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 08:18:10 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/11/02 19:06:49 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, check.c game_exit.c key.c	\
			so_long.c ft_error.c image.c print_exit.c print_wall.c			\
			ft_free.c print_map.c read_map.c)
SRCS_BONUS = $(addprefix srcs_bonus/,										\
			animation_idle.c animation_mov.c check.c ft_error.c ft_free.c 	\
			game_exit.c init_structs.c key.c load_image.c print_exit.c		\
			print_item.c print_map.c print_player.c print_wall.c			\
			read_map.c so_long.c)

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME = so_long
NAME_BONUS = so_long_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror 
LINKS = -framework OpenGL -framework AppKit
RM = rm -rf

#------------------------------------------------------------------------------#

LIBFT = $(LIBFT_PATH)/libft.a
LIBFT_PATH = ./libft
MLX = $(MLX_PATH)/libmlx.a
MLX_PATH = ./mlx

#------------------------------------------------------------------------------#

all: $(NAME)

bonus:  $(NAME_BONUS)

$(NAME): $(LIBFT) $(MLX) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LINKS) -o $(NAME) $(LIBFT) $(MLX)

$(NAME_BONUS): $(LIBFT) $(MLX) $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LINKS) -o $(NAME_BONUS) $(LIBFT) $(MLX)

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(MLX):
	make -C $(MLX_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	make -C $(MLX_PATH) clean
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus
