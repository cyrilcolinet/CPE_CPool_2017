/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** Put each words of a string into an array
*/

#include <stdlib.h>

#define IS_BTWS(value, a, b) ((value) >= (a) && (value) <= (b))
#define IS_BTWN(value, a, b) ((value) <= (a) && (value) >= (b))

int find_word(char *str)
{
	int i = 0;
	int nb = 0;
	while (str[i] != '\0') {
		while (IS_BTWS(str[i], 48, 57) || IS_BTWS(str[i], 65, 90) || IS_BTWS(str[i], 97, 122))
			i++;
		nb++;
		i++;
	}
	return (nb);
}

char **my_str_to_word_array(char *str)
{
	int nb = find_word(str);
	char **array = malloc(sizeof(char *) * (nb + 1));
	int i = 0;
	int character;
	int key = 0;
	
	while (str[i] != '\0') {
		array[key] = malloc(sizeof(char **) * my_strlen(str));
		while(IS_BTWN(str[i], '/', 32) || IS_BTWN(str[i], '@', ':') || IS_BTWN(str[i], '`', '[') || IS_BTWN(str[i], 127, '{'))
			i++;
		character = 0;
		while(IS_BTWS(str[i], 48, 57) || IS_BTWS(str[i], 65, 90) || IS_BTWS(str[i], 97, 122)) {
			array[key][character] = str[i];
			i++;
			character++;
		}
		key++;
	}
	array[key] = 0;
	return array;
}
