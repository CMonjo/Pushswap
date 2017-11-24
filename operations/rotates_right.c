/*
** EPITECH PROJECT, 2017
** Operations rotates right
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void rotate_right(int *list, int size)
{
	int cpy = list[size - 1];

	while (size > 0) {
		list[size - 1] = list[size - 2];
		size--;
	}
	list[0] = cpy;
	printf("rra");
}

void rotate_right_b(int *list_b, int size)
{
	int cpy = list_b[size - 1];

	while (size > 0) {
		list_b[size - 1] = list_b[size - 2];
		size--;
	}
	list_b[0] = cpy;
	printf("rrb");
}

void rotates_right(int *list, int *list_b, int size)
{
	rotate_right(list, size);
	rotate_right_b(list_b, size);
	printf("rrr");
}
