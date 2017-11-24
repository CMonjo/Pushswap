/*
** EPITECH PROJECT, 2017
** Operations swaps
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void swap_elem(int *list)
{
	int i = list[0];

	list[0] = list[1];
	list[1] = i;
	my_putstr("sa");
}

void swap_elem_b(int *list_b)
{
	int i = list_b[0];

	list_b[0] = list_b[1];
	list_b[1] = i;
	my_putstr("sb");
}

void swap_elems(int *list, int *list_b)
{
	swap_elem(list);
	swap_elem_b(list_b);
	my_putstr("sc");
}

void pb(int *list, int *list_b)
{
	int i = 1;
	int j = list[0];

	list[0] = j;
	list_b[0] = i;
	printf("pb");
}
