/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** Check if string contains only sumeric characters
*/

int my_str_isnum(const char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
