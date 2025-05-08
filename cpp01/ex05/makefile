# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 16:23:17 by mokariou          #+#    #+#              #
#    Updated: 2025/02/06 19:17:31 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex05
CC = g++
GFLAGS = -Wall -Wextra -Werror -std=c++98 #-pedantic -fsanitize=address

OBJ_DIR = obj/
SRC =  harl.cpp

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