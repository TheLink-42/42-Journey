# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 12:47:55 by jbaeza-c          #+#    #+#              #
#    Updated: 2023/12/04 14:12:00 by jbaeza-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = $(addprefix srcs/, main.cpp zombieHorde.cpp functionZombies.cpp Zombie.cpp)
OBJS = $(SRCS:.cpp=.o)

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re