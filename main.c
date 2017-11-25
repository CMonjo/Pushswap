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

void error_handling(int *list, int size)
{
	int stop = 0;

	if (size == 2) {
		if (list[0] > list[1]) {
			swap_elem(list);
		}
	}
	if (size <= 3)
		stop = my_stop(list, (size));
	if (stop == 0)
		my_pushswap(list, size);

}

int my_str_isnum(char *s)
{
	for (int j = 0; s[j] != '\0'; j++) {
		if ((s[j] > '9' || s[j] < '0') &&
		(s[j] != '-' && s[j] != '+')) {
			my_putstr("Error please enter only numbers\n");
			return (84);
		}
	}
	return (0);
}

int main(int ac, char **av)
{
	int *list;
	int i = 1;

	list = malloc(sizeof(char *) * ac);
	if (list == NULL)
		return (84);
	for (int k = 1; av[k] != NULL; k++) {
		if (my_str_isnum(av[k]) == 84)
			return (84);
	}
	if (ac < 2) {
		my_putstr("Error please enter a list\n");
		return (84);
	} else {
		while (i != ac) {
			list[i - 1] = my_getnbr(av[i]);
			i++;
		}
	}
	error_handling(list, ac - 1);
	my_putstr("\n");
	return (0);
}
