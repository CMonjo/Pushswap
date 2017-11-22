/*
** EPITECH PROJECT, 2017
** bulle sort
** File description:
** Pushswap with bubble sort
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void sa_bubble(int *list, int index, int index_plus)
{
	int i = list[index_plus];

	list[index_plus] = list[index];
	list[index] = i;
}

void bubble_sort(int *list, int size)
{
	int i = 0;

	while (i != size) {
		if (list[i] > list[i + 1] && i + 1 != size) {
			sa_bubble(list, i, i + 1);
			i = i - 2;
			i - 1 == size ? my_putstr("sa") : my_putstr("sa ");
		}
		i++;
	}
}
