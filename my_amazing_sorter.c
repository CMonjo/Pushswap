/*
** EPITECH PROJECT, 2017
** push_swap
** File description:
** .c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "pushswap.h"

int my_stop(int *list_a, int size)
{
	int i = 0;

	while (i + 1 != size) {
		if (list_a[i] <= list_a[i + 1]) {
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
		if (list[0] >= list[i]) {
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

void my_amazing_sorter(int *list_a, int *list_b, int size)
{
	int key = 0;

	list_b[0] = 1;
	while (my_stop(list_a, size) != 1) {
		key = print_space(key);

		if ((first_is_bigger(list_a, size) == 1)) {
			rotate_left(list_a, size);
			size--;
		}
		else if (list_a[0] <= list_a[1] && list_a[1] > list_a[2])
			rotate_left(list_a, size);
		else if (list_a[0] <= list_a[1] && list_a[1] <= list_a[2])
			rotate_right(list_a, size);
		else
			swap_elem(list_a);
	}
}
