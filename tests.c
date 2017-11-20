/*
** EPITECH PROJECT, 2017
** criterion
** File description:
** unit tests
*/

#include <criterion/criterion.h>
#include "my.h"
#include "pushswap.h"

Test(swap_elem, index1_greater_than_index2)
{
	int array [6] = {1, 2, 3, 4, 5, 6};
	int index1 = 2;
	int index2 = 4;

	swap_elem(array, index1, index2);
	cr_assert_eq(array[index1], 5);
	cr_assert_eq(array[index2], 3);
}

Test(bubble_sort_array, sort_array)
{
	int array [7] = {2, 4, 1, 7, 3, 5, 6};
	int size = 7;

	bubble_sort_array(array, size);
	cr_assert_eq(array[0], 1);
	cr_assert_eq(array[1], 2);
	cr_assert_eq(array[2], 3);
	cr_assert_eq(array[3], 4);
	cr_assert_eq(array[4], 5);
	cr_assert_eq(array[5], 6);
	cr_assert_eq(array[6], 7);
}

Test(bubble_sort_array2, sort_array_2)
{
	int array [6] = {15, 8, 42, 4, 16, 23};
	int size = 6;

	bubble_sort_array(array, size);
	cr_assert_eq(array[0], 4);
	cr_assert_eq(array[1], 8);
	cr_assert_eq(array[2], 15);
	cr_assert_eq(array[3], 16);
	cr_assert_eq(array[4], 23);
	cr_assert_eq(array[5], 42);
}

Test(my_amazing_sorter, amazing_sorter)
{
	int array [6] = {15, 8, 42, 4, 16, 23};
	int size = 6;

	my_amazing_sorter(array, size);
	cr_assert_eq(array[0], 4);
	cr_assert_eq(array[1], 8);
	cr_assert_eq(array[2], 15);
	cr_assert_eq(array[3], 16);
	cr_assert_eq(array[4], 23);
	cr_assert_eq(array[5], 42);
}
