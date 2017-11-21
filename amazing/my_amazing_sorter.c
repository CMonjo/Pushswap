/*
** EPITECH PROJECT, 2017
** my_amazing_sorter
** File description:
** .c
*/

#include <stdio.h>
#include "my.h"
#include "pushswap.h"

int my_stop(int *list_a, int size)
{
	int i = 0;

	while (i + 1 != size) {
		if (list_a[i] < list_a[i + 1]) {
			i++;
		} else
			return (0);
	}
	return (1);
}

void my_amazing_sorter(int *list_a, int *list_b, int size)
{
	int stop = 0;

	list_b[1] = stop;

	while (stop == 0) {
		if (list_a[0] > list_a[1]) {
			sa(list_a);
			my_putstr("sa ");
		}
		else if (list_a[0] < list_a[1] && list_a[0] < list_a[size - 1]) {
			rra(list_a, size);
			my_putstr("rra ");
		}
		else if (list_a[0] < list_a[1] && list_a[0] > list_a[size - 1]) {
			ra(list_a, size);
			my_putstr("ra ");
		}
		if (my_stop(list_a, size) == 1)
			stop = 1;
	}
	printf("\nresult : %d %d %d %d\n", list_a[0], list_a[1], list_a[2], list_a[3]);
}

// sa(list_a);
// sb(list_b);
// sc(list_a, list_b);
// ra(list_a, size);
// rb(list_b, size);
// rr(list_a, list_b, size);
// rra(list_a, size);
// rrb(list_b, size);
// rrr(list_a, list_b, size);
