/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

int compare(char *str, int *i, va_list list, int *count)
{
	specifier_simple(str, *i, list, count);
	(*i)++;
	return (0);
}

int my_printf(char *str, ...)
{
	va_list list;
	int i = 0;
	int count = 0;

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%') {
			compare(str, &i, list, &count);
		} else
			my_putchar_print(str[i], &count);
		i++;
		va_end(list);
	}
	return (count);
}
