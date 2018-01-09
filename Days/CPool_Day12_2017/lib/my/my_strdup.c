/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** Duplicate once
*/

#include <stdlib.h>

char *my_strdup(char *str)
{
	int size = my_strlen(str) + 1;
	char *new_str = malloc(size);
	if (new_str == 0)
		return (0);
	my_strcpy(new_str, str);
	return (new_str);
}
