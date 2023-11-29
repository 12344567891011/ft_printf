NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = 
OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):
	ar crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean :clean
	rm -f $(NAME)

re : fclean all

.PHONY: all ckean fclean re