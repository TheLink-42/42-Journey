# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 12:50:57 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/09/20 16:08:24 by jimmy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = 		$(addprefix string/, ft_split.c ft_strlcat.c ft_strncmp.c \
		ft_substr.c ft_atoi.c ft_itoa.c ft_strchr.c ft_strlcpy.c \
		ft_strnstr.c ft_strdup.c ft_strlen.c ft_strrchr.c \
		ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c \
		ft_itoa_base.c)							\
		$(addprefix put_fd/, ft_putchar_fd.c ft_putstr_fd.c \
			ft_putnbr_fd.c ft_putnbru_base_fd.c ft_putendl_fd.c \
			ft_putptr_fd.c)						\
		$(addprefix ascii/, ft_isalnum.c ft_isprint.c ft_isalpha.c \
			ft_isdigit.c ft_isascii.c ft_tolower.c ft_toupper.c)	\
		$(addprefix lst/, ft_lstadd_back.c ft_lstadd_front.c \
			ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c)			\
		$(addprefix memory/, ft_bzero.c ft_memccpy.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_calloc.c)						\
		$(addprefix printf/, ft_printf.c print_char.c print_decimal.c \
			print_hexalow.c print_hexaup.c print_integer.c \
			print_octal.c print_perc.c print_ptr.c print_string.c)		
		

OBJS = $(SRCS:.c=.o)


CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
