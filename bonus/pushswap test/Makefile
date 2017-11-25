##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror -pedantic -I ../CPE_pushswap_2017/include/

LIB	=	-L ../CPE_pushswap_2017/lib/my -lmy

SRC	=	../CPE_pushswap_2017/main.c				\
		../CPE_pushswap_2017/my_pushswap.c			\
		../CPE_pushswap_2017/operations/swaps.c			\
		../CPE_pushswap_2017/operations/rotates_right.c		\
		print.c							\
		../CPE_pushswap_2017/operations/rotates_left.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../CPE_pushswap_2017/lib/my/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)
	make clean -C ../CPE_pushswap_2017/lib/my/

clean:
	rm -f $(OBJ)
	make clean -C ../CPE_pushswap_2017/lib/my/

fclean: clean
	rm -f $(NAME)
	make fclean -C ../CPE_pushswap_2017/lib/my/

re: fclean all
