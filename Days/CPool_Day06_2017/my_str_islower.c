/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** Check if string given as parameter is in lowercase
*/

int my_str_islower(const char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;   }
	return (1);
}
