/*
** EPITECH PROJECT, 2017
** bulle sort
** File description:
** Pushswap with bubble sort
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

void bubble_sort(int *list, int size)
{
	int i = 0;
	int key = 0;

	while (i != size) {
		if (list[i] > list[i + 1] && i + 1 != size) {
			key = print_space(key);
			sa(list);
			i = i - 2;
			printf("sa");
		}
		i++;
	}
	i = 0;
	printf("\n");
	printf("\n\nResult bubble sort = ");
}
