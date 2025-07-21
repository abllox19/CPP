# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 20:05:21 by asoumare          #+#    #+#              #
#    Updated: 2025/07/21 23:50:05 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = FragTrap.cpp ScavTrap.cpp main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re