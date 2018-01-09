/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** Copy string into another
*/

char *my_strcpy(char *dest, const char *src)
{
	char *ptr = dest;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
