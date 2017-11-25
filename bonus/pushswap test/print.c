/*
** EPITECH PROJECT, 2017
** criterion
** File description:
** unit tests
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "pushswap.h"

void print_list(int *list, int ac)
{
	int i = 1;

	while (i != ac) {
		printf("[%d] ", list[i - 1]);
		i++;
	}
	printf("\n\n\n");
}

void print_res(int *list, int size)
{
	int i = 0;

	printf("\n\nResult :");
	while (i < size) {
		printf("\nlist[%d] = %d", i, list[i]);
		i++;
	}
	printf("\n");
}
