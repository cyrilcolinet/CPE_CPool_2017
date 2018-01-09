/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** Reverse displing of a string
*/

char *my_evil_str(char *str)
{
	char *first = str;
	char *last = str;
	while(*last)
		++last;
	if(first < last) {
		for(; first < --last; ++first) {
			char c = *first;
			*first = *last;
			*last = c;
		}
	}
	return str;
}
