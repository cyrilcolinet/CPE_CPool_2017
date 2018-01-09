/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** Function that copies n characters from a string into another. The destination string will already have enought memory to contain n characters
*/

char *my_strncpy(char *dest, char *src, int n)
{
	int loop = 0;
	while(loop < n && src[loop] != '\0') {
		dest[loop] = src[loop];
		loop++;
	}
	while(loop < n) {
		dest[loop] = 0;
		loop++;
	}
	return dest;
}
