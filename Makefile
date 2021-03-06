##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror -I include/

LIB	=	-L lib/my -lmy

SRC	=	main.c				\
		my_pushswap.c			\
		operations/rotates_left.c	\
		operations/rotates_right.c	\
		operations/swaps.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib/my/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)
	make clean -C ./lib/my/

clean:
	rm -f $(OBJ)
	make clean -C ./lib/my/

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my/

re: fclean all
