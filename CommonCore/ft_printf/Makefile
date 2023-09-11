# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 13:09:21 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/09/11 13:09:21 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_printf.c print_char.c print_decimal.c print_hexalow.c \
		print_hexaup.c print_integer.c print_octal.c print_ptr.c \
		print_string.c
OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus libft