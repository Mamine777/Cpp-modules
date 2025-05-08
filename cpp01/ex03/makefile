NAME = violence
CC = g++
GFLAGS = -Wall -Wextra -Werror -std=c++98 #-pedantic -fsanitize=address

OBJ_DIR = obj/
SRC =  humanA.cpp humanB.cpp main.cpp Weapon.cpp

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