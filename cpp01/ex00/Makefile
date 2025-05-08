# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 13:48:46 by mokariou          #+#    #+#              #
#    Updated: 2025/01/27 14:04:33 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
CC = g++
GFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJ_DIR = obj/
SRC = newZombie.cpp zombie.cpp main.cpp

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