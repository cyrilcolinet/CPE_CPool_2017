/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** Get the length of a string
*/

int my_strlen(const char *str)
{
	int length = 0;
	while (str[length] != '\0') {
		length++;
	}
	return (length);
}
