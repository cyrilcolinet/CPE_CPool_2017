/*
** EPITECH PROJECT, 2017
** my_params_to_list
** File description:
** Creates a new list from the command line arguments
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
	linked_list_t *tmp = begin;
	int size = 0;
	while(tmp != NULL) {
		size++;
		tmp = tmp->next;
	}
	return size;
}
