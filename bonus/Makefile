##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror -I ../include/

LIB	=	-L ../lib/my -lmy -L ../lib/ -lprintf

SRC	=	../my_pushswap.c		\
		../operations/swaps.c		\
		../operations/rotates_right.c	\
		../operations/rotates_left.c	\
		main.c				\
		print.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap_bonus

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../lib/my/
	make -C ../lib/printf/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)
	make clean -C ../lib/my/
	make clean -C ../lib//printf/

clean:
	rm -f $(OBJ)
	make clean -C ../lib/my/
	make clean -C ../lib/printf/

fclean: clean
	rm -f $(NAME)
	make fclean -C ../lib/my/
	make fclean -C ../lib//printf/

re: fclean all
