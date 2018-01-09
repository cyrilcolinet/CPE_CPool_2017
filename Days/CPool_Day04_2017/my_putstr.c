/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Display string into console
*/

#include <unistd.h>

void my_putstr(const char *str)
{
	int len;
	if (str) {
		len = my_strlen(str);
		if (len > 0)
			write(1, str, len);
	}
}
