/*
** EPITECH PROJECT, 2017
** my_amazing_sorter
** File description:
** .c
*/
#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void my_rotate_right(int *array, int size)
{
	int cpy = array[size - 1];

	while (size > 0) {
		array[size - 1] = array[size - 2];
		size--;
	}
	array[0] = cpy;
}

void my_rotate_left(int *array, int size)
{
	int count = 0;
	int cpy = array[0];

	while (count < size - 1) {
		array[count] = array[count + 1];
		count++;
	}
	array[size - 1] = cpy;
}

void my_swap_push(int *array)
{
	int i = array[0];

	array[0] = array[1];
	array[1] = i;
}

int my_stop(int *array, int size)
{
	int i = 0;

	while (i + 1 != size) {
		if (array[i] < array[i + 1]) {
			i++;
		}
		else {
			return (0);
		}
	}
	return (1);
}

void my_amazing_sorter(int *array, int size)
{
	int stop = 0;

	while (stop == 0) {
		if (array[0] > array[1]) {
			my_swap_push(array);
			my_putstr("swap\n");
		}
		else if (array[0] < array[1] && array[0] < array[size - 1]) {
			my_rotate_right(array, size);
			my_putstr("rotate_right\n");
		}
		else if (array[0] < array[1] && array[0] > array[size - 1]) {
			my_rotate_left(array, size);
			my_putstr("rotate_left\n");
		}
		if (my_stop(array, size) == 1)
			stop = 1;
	}
}
