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
	int *list;
	int i = 1;
	int size = ac - 1;
	int stop = 0;

	list = malloc(sizeof(char *) * ac);
	if (list == NULL)
		exit (84);
	if (ac < 2) {
		my_putstr("Error please enter a list\n");
		exit (84);
	} else {
		printf("\nLIST = ");
		while (i != ac) {
			list[i - 1] = my_getnbr(av[i]);
			printf("[%d] ", list[i - 1]);
			i++;
		}
	}
	printf("\n\nOPE = \n");
	if (size == 2) {
		if (list[0] > list[1]) {
			swap_elem(list);
		}
	}
	if (size <= 3)
		stop = my_stop(list, size);
	if (stop == 0)
		my_amazing_sorter(list, size);

	i = 0;
	printf("\n");
	while (i < size) {
		printf("\nlist[%d] = %d", i, list[i]);
		i++;
	}
	printf("\n");
	return (0);
}
