/*
** EPITECH PROJECT, 2017
** criterion
** File description:
** unit tests
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "pushswap.h"

int main(int ac, char **av)
{
	int *list1;
	int i = 1;
	int size = ac - 1;

	printf("ac : %d\n", ac);
	printf("size : %d\n\n", size);

	list1 = malloc(sizeof(char *) * ac);
	if (list1 == NULL)
		exit (84);
	if (ac == 0) {
		my_putstr("Error please enter a list\n");
		exit (84);
	}
	else {
		printf("LIST1 :\n");
		while (i != ac) {
			list1[i - 1] = my_getnbr(av[i]);
			printf("%d\n", list1[i - 1]);
			i++;
		}
		my_putchar('\n');
		list1[i] = '\0';
		my_amazing_sorter(list1, size);
	}
	return (0);
}
