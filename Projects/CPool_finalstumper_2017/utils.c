/*
** EPITECH PROJECT, 2017
** utils
** File description:
** Utils functions
*/

#include "include/utils.h"
#include <stdlib.h>

void *my_malloc(unsigned int size)
{
	void *ptr = malloc(size);
	if(ptr != NULL)
		return (ptr);
	return;
}
