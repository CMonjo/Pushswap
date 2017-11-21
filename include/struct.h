/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Définition fonctions libmy
*/

typedef struct s_list
{
	int val;            /* données quelconques - ici un entier */
	struct list* prec;    /* pointeur sur l'élément précédent */
	struct list* suiv;    /* pointeur sur l'élément suivant */
} list_t;
