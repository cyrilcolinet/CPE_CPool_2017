/*
** EPITECH PROJECT, 2017
** rush_first
** File description:
** Rush 1_1
*/

#include <stdlib.h>

static char *diff_size_to_str(int x, int y)
{
	char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
	int offset = 0;
	for(int line = 1; line <= y; line++) {
		if(line == 1 || line == y) {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1 || i == x) ? 'o' : '-');
			ret[offset++] = '\n';
		} else {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1 || i == x) ? '|' : ' ');
			ret[offset++] = '\n';
		}
	}
	ret[offset++] = 0;
	return (ret);
}

char *rush_first(int x, int y)
{
	if(x <= 0 || y <= 0) {
		return ("invalid_size");
	}
	if (x == 1 && y == 1)
		return ("o\n");
	else
		return (diff_size_to_str(x, y));
}
