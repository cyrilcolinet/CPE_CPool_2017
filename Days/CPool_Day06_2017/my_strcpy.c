/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** Function that copies a string into another. The destination string will already have enought memory to copy the source string
*/

char *my_strcpy(char *dest, char const *src)
{
	char *str;
	str = dest;
	while(*src != 0)
		*str++ = *src++;
	*str = 0;
	return dest;
}
