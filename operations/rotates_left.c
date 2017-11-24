/*
** EPITECH PROJECT, 2017
** Operations rotates_left
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void rotate_left(int *list, int size)
{
	int count = 0;
	int cpy = list[0];

	while (count < size - 1) {
		list[count] = list[count + 1];
		count++;
	}
	list[size - 1] = cpy;
	my_putstr("ra");
}

void rotate_left_b(int *list_b, int size)
{
	int count = 0;
	int cpy = list_b[0];

	while (count < size - 1) {
		list_b[count] = list_b[count + 1];
		count++;
	}
	list_b[size - 1] = cpy;
	my_putstr("rb");
}

void rotates_left(int *list, int *list_b, int size)
{
	rotate_left(list, size);
	rotate_left_b(list_b, size);
	my_putstr("rr");
}
