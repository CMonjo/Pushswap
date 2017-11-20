/*
** EPITECH PROJECT, 2017
** swap elem
** File description:
** func that swap elements in a list
*/
#include "my.h"
#include "pushswap.h"

void swap_elem(int *array, int index1, int index2)
{
	int i = array[index2];

	array[index2] = array[index1];
	array[index1] = i;
}
