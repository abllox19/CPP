# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 20:05:21 by asoumare          #+#    #+#              #
#    Updated: 2025/07/11 20:22:42 by asoumare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Sed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) data.txt

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re