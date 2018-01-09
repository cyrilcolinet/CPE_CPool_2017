/*
** EPITECH PROJECT, 2017
** bistro
** File description:
** Bistro utils functions
*/

#include "../include/bistro.h"

char *convert_expr(base_t *base, operator_t *ops, char *expr,
		   int base_cnt, int size)
{
	int offset = 0;
	char *res = my_malloc(sizeof(char *) * (size + 1));

	while (offset < size) {
		for (int i = 0; i < base_cnt; i++)
			if (expr[offset] == base[i].def)
				res[offset] = base[i].num;
		for (int i = 0; i < 7; i++)
			if (expr[offset] == ops[i].def)
				res[offset] = ops[i].oper;
		offset++;
	}
	res[offset] = 0;
	return (res);
}

char *get_based_result(base_t *base, char *res, int base_cnt, int size)
{
	int offset = 0;
	char *result = my_malloc(sizeof(char *) * (size + 1));

	while (offset < size) {
		for (int i = 0; i < base_cnt; i++)
			if (res[offset] == base[i].num)
				result[offset] = base[i].def;
		offset++;
	}
	result[offset] = 0;
	return (result);
}

/**
 ** Get the default operator by offset
 ** @param (int) offset
 ** @return (char) c
 **/
char get_default_operator(int offset)
{
	char c;

	if (offset == 1)
		c = '(';
	else if (offset == 2)
		c = ')';
	else if (offset == 3)
		c = '+';
	else if (offset == 4)
		c = '-';
	else if (offset == 5)
		c = '*';
	else if (offset == 6)
		c = '/';
	else if (offset == 7)
		c = '%';
	else
		exit(EXIT_USAGE);
	return (c);
}
