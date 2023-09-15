# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 16:31:21 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/08/30 13:40:29 by mbelmont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= main.c util.c algorithm.c check.c util2.c create_tab.c

SRCS	= ${addprefix ${PRE}, ${SRC}}

OBJS	= ${SRCS:.c=.o}

PRE	= ./srcs/

HEAD	= ./includes/

NAME	= bsq

all:	${NAME}

%.o:	%.c
	cc -Wall -Wextra -Werror -I ${HEAD} -c $*.c -o $*.o

$(NAME): $(OBJS)
	cc -Wall -Wextra -Werror -o $@ $^

clean:
	rm -fr ${OBJS}

fclean:		clean
	rm -fr ${NAME}

re: fclean all

.PHONY:		all clean fclean re
