NAME = libftprintf

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
