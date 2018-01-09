/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** Function that allocates memory and copies the string given as argument in it
*/

#include <stdlib.h>

char *my_strdup(char const *str)
{
	int strlen = my_strlen(str);
	char *ptr = malloc(sizeof(char) * (strlen + 1));
        ptr = my_strcpy(ptr, str);
        return ptr;
}
