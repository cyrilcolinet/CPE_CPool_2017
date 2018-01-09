/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** Check if the string given as parameter contains only printable charcaters
*/

int my_str_isprintable(const char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
