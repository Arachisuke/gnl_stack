CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3

SRC = get_next_line.c get_next_line_utils.c
OBJ = $(SRC:.c=.o)
LIBFT_PATH=	../libft/libft.h
LIB_NAME = libgnl.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ) 
	ar rc $(LIB_NAME) $(OBJ)
	ranlib $(LIB_NAME)

.c.o:
	$(CC) $(CFLAGS) $(LIBFT) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
