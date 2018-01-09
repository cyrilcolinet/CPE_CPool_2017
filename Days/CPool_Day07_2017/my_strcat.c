/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** Concatenate two strings
*/

char *my_strcat(char *dest, const char *src)
{
	int i = 0;
	int len = my_strlen(dest);
	while (src[i] != '\0') {
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
