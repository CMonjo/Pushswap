/*
** EPITECH PROJECT, 2017
** Operations
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

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

void sc(int *list_a, int *list_b)
{
	sa(list_a);
	sb(list_b);
}

void ra(int *list_a, int size)
{
	int count = 0;
	int cpy = list_a[0];

	while (count < size - 1) {
		list_a[count] = list_a[count + 1];
		count++;
	}
	list_a[size - 1] = cpy;
}

void rb(int *list_b, int size)
{
	int count = 0;
	int cpy = list_b[0];

	while (count < size - 1) {
		list_b[count] = list_b[count + 1];
		count++;
	}
	list_b[size - 1] = cpy;
}

void rr(int *list_a, int *list_b, int size)
{
	ra(list_a, size);
	rb(list_b, size);
}

void rra(int *list_a, int size)
{
	int cpy = list_a[size - 1];

	while (size > 0) {
		list_a[size - 1] = list_a[size - 2];
		size--;
	}
	list_a[0] = cpy;
}

void rrb(int *list_b, int size)
{
	int cpy = list_b[size - 1];

	while (size > 0) {
		list_b[size - 1] = list_b[size - 2];
		size--;
	}
	list_b[0] = cpy;
}

void rrr(int *list_a, int *list_b, int size)
{
	rra(list_a, size);
	rrb(list_b, size);
}
