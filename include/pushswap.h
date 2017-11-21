/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** pushswap
*/

#ifndef _PUSHSWAP_H_
#define _PUSHSWAP_H_

void sa(int *list_a);
void sb(int *list_b);
void sc(int *list_a, int *list_b);
void ra(int *list_a, int size);
void rb(int *list_b, int size);
void rr(int *list_a, int *list_b, int size);
void rra(int *list_a, int size);
void rrb(int *list_b, int size);
void rrr(int *list_a, int *list_b, int size);

void my_amazing_sorter(int *list_a, int *list_b, int size);
int my_stop(int *list_a, int size);

void bubble_sort(int *list, int size);
void sa_bubble(int *array, int index, int index_plus);
#endif
