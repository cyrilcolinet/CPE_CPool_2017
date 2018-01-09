/*
** EPITECH PROJECT, 2017
** rush_five
** File description:
** Rush 1_5
*/

#include <stdlib.h>

static char *diff_size_to_str(int x, int y)
{
	char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
	int offset = 0;
	for(int line = 1; line <= y; line++) {
		if(line == 1) {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1) ? 'A' : (i == x) ? 'C' : 'B');
			ret[offset++] = '\n';
		} else if(line == y) {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1) ? 'C' : (i == x) ? 'A' : 'B');
			ret[offset++] = '\n';
		} else {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1 || i == x) ? 'B' : ' ');
			ret[offset++] = '\n';
		}
	}
	ret[offset++] = 0;
	return (ret);
}

char *rush_five(int x, int y)
{
	if(x <= 0 || y <= 0) {
		return ("invalid_size");
	}
	if (x == 1 && y == 1)
		return ("B\n");
	else if(x == 1) {
		char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
		int offset = 0;
		for(int i = 0; i < y; i++) {
			ret[offset++] = 'B';
			ret[offset++] = '\n';
		}
		ret[offset++] = 0;
		return (ret);
	} else if(y == 1) {
		char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
		int offset = 0;
		for(int i = 0; i < x; i++)
			ret[offset++] = 'B';
		ret[offset++] = '\n';
		ret[offset++] = 0;
		return (ret);
	} else
		return (diff_size_to_str(x, y));
}
