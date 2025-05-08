# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 15:35:26 by mokariou          #+#    #+#              #
#    Updated: 2025/02/06 19:18:04 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = More_brainz
CC = g++
GFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

OBJ_DIR = obj/
SRC =  zombie.cpp

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