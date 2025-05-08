# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/14 15:24:04 by mokariou          #+#    #+#              #
#    Updated: 2025/01/04 17:37:10 by mokariou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CC = c++ -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj/
SRC = Account.cpp tests.cpp 

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
