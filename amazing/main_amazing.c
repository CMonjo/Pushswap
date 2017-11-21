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

	printf("ac : %d size : %d\n", ac, ac - 1);

	list_a = malloc(sizeof(char *) * ac);
	list_b = malloc(sizeof(char *) * ac);
	if (list_a == NULL || list_b == NULL)
		exit (84);
	if (ac < 2) {
		my_putstr("Error please enter a list\n");
		exit (84);
	}
	else {
		printf("LIST  = ");
		while (i != ac) {
			list_a[i - 1] = my_getnbr(av[i]);
			printf("%d, ", list_a[i - 1]);
			i++;
		}
		printf("\n\n");
		list_a[i] = '\0';
		bubble_sort(list_a, ac - 1);
		list_b[0] = i;
		my_amazing_sorter(list_a, list_b, ac - 1);
	}
	return (0);
}
