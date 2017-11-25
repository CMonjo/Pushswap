/*
** EPITECH PROJECT, 2017
** Project pushswap
** File description:
** Main file
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "pushswap.h"
#include "printf.h"

void error_handling(int *list, int size)
{
	int stop = 0;

	if (size == 2 && (list[0] > list[1]))
		swap_elem(list);
	if (size <= 3)
		stop = my_stop(list, (size));
	if (stop == 0)
		my_pushswap(list, size);
}

void generate_list(int ac, char **av, int *list)
{
	int i = 1;

	while (i != ac) {
		list[i - 1] = my_getnbr(av[i]);
		i++;
	}
	print_list(list, ac);
	error_handling(list, ac - 1);
}

int my_help(char *s, int k)
{
	if (s[k] == '-' && s[k + 1] == 'h') {
		my_printf("The objective is to sort a list of numbers\n");
		my_printf("Usage: ./pushswap <number 1> <number 2> etc.\n");
		my_printf("Numbers between -2147483648 and");
		my_printf(" +2147483647 are allowed\n");
		my_printf("You can use the symbols '+' & '-'\n");
		return (1);
	}
	return (0);
}

int my_str_isnum(char *s)
{
	int k = 0;

	if (my_help(s, k) == 1)
		return (84);
	for (int j = 0; s[j] != '\0'; j++) {
		if ((s[j] > '9' || s[j] < '0') &&
		(s[j] != '-' && s[j] != '+')) {
			my_printf("Error please enter only numbers\n");
			return (84);
		}
	}
	return (0);
}

int main(int ac, char **av)
{
	int *list;

	list = malloc(sizeof(char *) * ac);
	if (list == NULL)
		return (84);
	for (int k = 1; av[k] != NULL; k++) {
		if (my_str_isnum(av[k]) == 84)
			return (84);
	}
	if (ac < 2) {
		my_printf("Error please enter a list\n");
		return (84);
	} else
		generate_list(ac, av, list);
	print_res(list, ac - 1);
	my_printf("\n");
	return (0);
}
