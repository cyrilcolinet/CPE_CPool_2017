/*
** EPITECH PROJECT, 2017
** my_rev_list
** File description:
** Reverses the orderof the lists elements
*/

#include <stdlib.h>
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
	linked_list_t *previous = NULL;
	linked_list_t *current = *begin;
	linked_list_t *next;
	while(current != NULL) {
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin = previous;
}
