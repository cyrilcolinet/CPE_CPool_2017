/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** Concatenate n character of two strings
*/

char *my_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest + my_strlen(dest);
	while (i < n && src[i] != '\0') {
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (dest);
}
