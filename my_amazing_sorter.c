/*
** EPITECH PROJECT, 2017
** push_swap
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

int my_stop(int *list, int size)
{
	int i = 0;

	while (i + 1 != size) {
		if (list[i] < list[i + 1]) {
			i++;
		} else
			return (0);
	}
	return (1);
}

int first_is_bigger(int *list, int size)
{
	int i = 1;

	while (i + 1 != size) {
		if (list[0] > list[i]) {
			i++;
		} else
			return (0);
	}
	return (1);
}

int print_space(int key)
{
	if (key == 0)
		key = 1;
	else
		printf(" ");
	return (key);
}

void my_amazing_sorter(int *list, int size)
{
	int key = 0;

	while (my_stop(list, size) != 1) {
		key = print_space(key);
		if (first_is_bigger(list, size) == 1)
			rotate_left(list, size);
		else if (list[0] < list[1] && list[0] < list[size - 1])
			rotate_right(list, size);
		else if (list[0] < list[1] && list[0] > list[size - 1])
			rotate_left(list, size);
		else
			swap_elem(list);
	}
}
