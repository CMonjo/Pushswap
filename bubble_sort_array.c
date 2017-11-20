/*
** EPITECH PROJECT, 2017
** bulle sort array
** File description:
** func that bubble sort an str
*/
#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void bubble_sort_array(int *array, int size)
{
	int i = 0;

	while (i != size) {
		if (array[i] > array[i + 1] && i + 1 != size) {
			swap_elem(array, i, i + 1);
			i = -1;
		}
		i++;
	}
}
