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
#include "printf.h"

void print_list(int *list, int ac)
{
	int i = 1;

	my_printf("Your list is composed of :\n\n");
	while (i != ac) {
		my_printf("[%d] ", list[i - 1]);
		i++;
	}
	my_printf("\n\n\nThe operations are :\n\n");
}

void print_res(int *list, int size)
{
	int i = 0;

	my_printf("\n\n\nYour list is now sorted !\n\n");
	while (i < size) {
		my_printf("[%d] ", list[i]);
		i++;
	}
	my_printf("\n");
}
