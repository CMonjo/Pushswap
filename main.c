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
	int *list_a;
	int *list_b;
	int i = 1;
	int size = ac - 1;
	int stop = 0;

	list_a = malloc(sizeof(char *) * ac);
	list_b = malloc(sizeof(char *) * ac);
	if (list_a == NULL || list_b == NULL)
		exit (84);
	if (ac < 2) {
		my_putstr("Error please enter a list_a\n");
		exit (84);
	} else {
		printf("\nLIST_A = ");
		while (i != ac) {
			list_a[i - 1] = my_getnbr(av[i]);
			printf("[%d] ", list_a[i - 1]);
			i++;
		}
		i = 1;
		printf("\nLIST_B = ");
		while (i != ac) {
			list_b[i - 1] = 0;
			printf("[%d] ", list_b[i - 1]);
			i++;
		}

	}
	printf("\n\nOPE = \n");
	if (size == 2) {
		if (list_a[0] > list_a[1]) {
			swap_elem(list_a);
		}
	}
	if (size <= 3)
		stop = my_stop(list_a, size);
	if (stop == 0)
		my_amazing_sorter(list_a, list_b, size);

	//PRINT
	i = 0;
	printf("\n");
	while (i < size) {
		printf("\nlist_a[%d] = %d", i, list_a[i]);
		i++;
	}
	printf("\n");
	return (0);
}
