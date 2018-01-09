/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** Check if the strng given as parameter is uppercase
*/

int my_str_isupper(const char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
