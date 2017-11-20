/*
** EPITECH PROJECT, 2017
** my_amazing_sorter
** File description:
** .c
*/
#include <stdio.h>
#include "my.h"

void my_rotate_right(int *list1, int size)
{
	int cpy = list1[size - 1];

	while (size > 0) {
		list1[size - 1] = list1[size - 2];
		size--;
	}
	list1[0] = cpy;
}

void my_rotate_left(int *list1, int size)
{
	int count = 0;
	int cpy = list1[0];

	while (count < size - 1) {
		list1[count] = list1[count + 1];
		count++;
	}
	list1[size - 1] = cpy;
}

void swap_elem(int *list1)
{
	int i = list1[0];

	list1[0] = list1[1];
	list1[1] = i;
}

int my_stop(int *list1, int size)
{
	int i = 0;

	while (i + 1 != size) {
		if (list1[i] < list1[i + 1]) {
			i++;
		}
		else {
			return (0);
		}
	}
	return (1);
}

void my_amazing_sorter(int *list1, int size)
{
	int stop = 0;

	while (stop == 0) {
		if (list1[0] > list1[1]) {
			swap_elem(list1);
			my_putstr("swap\n");
		}
		else if (list1[0] < list1[1] && list1[0] < list1[size - 1]) {
			my_rotate_right(list1, size);
			my_putstr("rotate_right\n");
		}
		else if (list1[0] < list1[1] && list1[0] > list1[size - 1]) {
			my_rotate_left(list1, size);
			my_putstr("rotate_left\n");
		}
		if (my_stop(list1, size) == 1)
			stop = 1;
	}
	printf("\nresult : %d %d %d\n", list1[0], list1[1], list1[2]);
}
