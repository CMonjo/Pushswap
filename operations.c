/*
** EPITECH PROJECT, 2017
** Operations
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void swap_elem(int *list_a)
{
	int i = list_a[0];

	list_a[0] = list_a[1];
	list_a[1] = i;
	printf("sa");
}

void rotate_left(int *list_a, int size)
{
	int count = 0;
	int cpy = list_a[0];

	while (count < size - 1) {
		list_a[count] = list_a[count + 1];
		count++;
	}
	list_a[size - 1] = cpy;
	printf("ra");
}

void rotate_right(int *list_a, int size)
{
	int cpy = list_a[size - 1];

	while (size > 0) {
		list_a[size - 1] = list_a[size - 2];
		size--;
	}
	list_a[0] = cpy;
	printf("rra");
}
