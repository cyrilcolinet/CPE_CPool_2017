/*
** EPITECH PROJECT, 2017
** rush_second
** File description:
** Rush 1_1
*/

#include <stdlib.h>

static char *diff_size_to_str(int x, int y)
{
	char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
	int offset = 0;
	for(int line = 1; line <= y; line++) {
		if(line == 1) {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1) ? '/' : (i == x) ? 92 : '*');
			ret[offset++] = '\n';
		} else if(line == y) {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1) ? 92 : (i == x) ? '/' : '*');
			ret[offset++] = '\n';
		} else {
			for(int i = 1; i <= x; i++)
				ret[offset++] = ((i == 1 || i == x) ? '*' : ' ');
			ret[offset++] = '\n';
		}
	}
	ret[offset++] = 0;
	return (ret);
}

char *rush_second(int x, int y)
{
	if(x <= 0 || y <= 0) {
		return ("invalid_size");
	}
	if (x == 1 && y == 1)
		return ("*\n");
	else if(x == 1) {
		char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
		int offset = 0;
		for(int i = 0; i < y; i++) {
			ret[offset++] = '*';
			ret[offset++] = '\n';
		}
		ret[offset++] = 0;
		return (ret);
	} else if(y == 1) {
		char *ret = malloc(sizeof(char) * ((x * y) + y + 1));
		int offset = 0;
		for(int i = 0; i < x; i++)
			ret[offset++] = '*';
		ret[offset++] = '\n';
		ret[offset++] = 0;
		return (ret);
	} else
		return (diff_size_to_str(x, y));
}
