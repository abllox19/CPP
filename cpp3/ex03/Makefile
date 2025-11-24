# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 20:05:21 by asoumare          #+#    #+#              #
#    Updated: 2025/07/22 20:40:51 by asoumare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = FragTrap.cpp ScavTrap.cpp main.cpp ClapTrap.cpp DiamondTrap.cpp
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