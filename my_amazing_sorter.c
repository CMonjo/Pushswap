/*
** EPITECH PROJECT, 2017
** my_amazing_sorter
** File description:
** .c
*/
#include <stdio.h>
#include "my.h"

void sa(int *list_a)
{
	int i = list_a[0];

	list_a[0] = list_a[1];
	list_a[1] = i;
}

void sb(int *list_b)
{
	int i = list_b[0];

	list_b[0] = list_b[1];
	list_b[1] = i;
}

void my_rotate_right(int *list_a, int size)
{
	int cpy = list_a[size - 1];

	while (size > 0) {
		list_a[size - 1] = list_a[size - 2];
		size--;
	}
	list_a[0] = cpy;
}

void my_rotate_left(int *list_a, int size)
{
	int count = 0;
	int cpy = list_a[0];

	while (count < size - 1) {
		list_a[count] = list_a[count + 1];
		count++;
	}
	list_a[size - 1] = cpy;
}

int my_stop(int *list_a, int size)
{
	int i = 0;

	while (i + 1 != size) {
		if (list_a[i] < list_a[i + 1]) {
			i++;
		}
		else {
			return (0);
		}
	}
	return (1);
}

void my_amazing_sorter(int *list_a, int size)
{
	int stop = 0;

	while (stop == 0) {
		if (list_a[0] > list_a[1]) {
			swap_elem(list_a);
			my_putstr("swap\n");
		}
		else if (list_a[0] < list_a[1] && list_a[0] < list_a[size - 1]) {
			my_rotate_right(list_a, size);
			my_putstr("rotate_right\n");
		}
		else if (list_a[0] < list_a[1] && list_a[0] > list_a[size - 1]) {
			my_rotate_left(list_a, size);
			my_putstr("rotate_left\n");
		}
		if (my_stop(list_a, size) == 1)
			stop = 1;
	}
	printf("\nresult : %d %d %d\n", list_a[0], list_a[1], list_a[2]);
}
