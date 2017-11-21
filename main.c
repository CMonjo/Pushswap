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
	int i = 1;

	list_a = malloc(sizeof(char *) * ac);
	if (list_a == NULL)
		exit (84);
	if (ac < 2) {
		my_putstr("Error please enter a list\n");
		exit (84);
	}
	else {
		while (i != ac) {
			list_a[i - 1] = my_getnbr(av[i]);
			i++;
		}
		list_a[i] = '\0';
		bubble_sort(list_a, ac - 1);
	}
	return (0);
}
