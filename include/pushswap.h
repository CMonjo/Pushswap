/*
** EPITECH PROJECT, 2017
** Project Pushswap
** File description:
** Header
*/

#ifndef _PUSHSWAP_H_
	#define _PUSHSWAP_H_
	void swap_elem(int *list);
	void swap_elem_b(int *list_b);
	void swap_elems(int *list, int *list_b);
	void rotate_left(int *list, int size);
	void rotate_left_b(int *list_b, int size);
	void rotates_left(int *list, int *list_b, int size);
	void rotate_right(int *list, int size);
	void rotate_right_b(int *list_b, int size);
	void rotates_right(int *list, int *list_b, int size);
	void my_pushswap(int *list, int size);
	void error_handling(int *list, int size);
	void generate_list(int ac, char **av, int *list);
	int my_help(char *s, int k);
	int my_stop(int *list, int size);
	int print_space(int key);
	int first_is_bigger(int *list, int size);
	void print_list(int *list, int ac);
	void print_res(int *list, int size);
#endif
