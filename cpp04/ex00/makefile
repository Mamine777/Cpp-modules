# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 19:15:41 by mokariou          #+#    #+#              #
#    Updated: 2025/02/09 17:11:03 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	Polymorphism
CC = g++
GFLAGS = -Wall -Wextra -Werror -std=c++98 #-pedantic -fsanitize=address

OBJ_DIR = obj/
SRC =  Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

SRCS = $(SRC)
OBJ = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(GFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)%.o: %.c
		@mkdir -p $(OBJ_DIR)
		@mkdir -p $(dir $@)
		$(CC) $(GFLAGS) -c $< -o $@
clean:
		rm -rf $(OBJ_DIR)
fclean: clean
		rm -f $(NAME)
re: fclean all