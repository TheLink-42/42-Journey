# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 12:50:57 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/09/16 21:34:12 by jimmy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = 	ft_isalnum.c ft_isprint.c ft_memcmp.c \
		ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c \
		ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c \
		ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c  \
		ft_isascii.c ft_memccpy.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c \
		ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
		ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strmapi.c \
		ft_strtrim.c ft_striteri.c

OBJS = $(SRCS:.c=.o)

BONUS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
BONUS_NAME = .bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

$(BONUS_NAME): $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	ar rcs $(BONUS_NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re
