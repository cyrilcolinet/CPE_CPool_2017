/*
** EPITECH PROJECT, 2017
** my_params_to_list
** File description:
** Creates a new list from the command line arguments
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
	linked_list_t *list = NULL;
	
	for(int i = 0; i < ac; i++) {
		put_data_in_list(&list, av[i]);
	}

	return list;
}

void put_data_in_list(linked_list_t **list, char *arg)
{
	linked_list_t *elem;
	elem = malloc(sizeof(*elem));
	elem->data = arg;
	elem->next = *list;
	*list = elem;
}
