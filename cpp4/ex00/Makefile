# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 18:15:36 by asoumare          #+#    #+#              #
#    Updated: 2025/08/01 18:15:37 by asoumare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphisme
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp animal.cpp dog.cpp cat.cpp Wronganimal.cpp Wrongcat.cpp
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