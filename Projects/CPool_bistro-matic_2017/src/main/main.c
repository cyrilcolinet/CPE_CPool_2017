/*
** EPITECH PROJECT, 2017
** main file
** File description:
** Bistro-matic main file
*/

#include <stdlib.h>
#include <string.h>
#include "../../include/bistro-matic.h"
#include "../../include/my.h"
#include "../../include/math.h"
#include "../../include/eval_expr.h"
#include "../../include/utils.h"

static void help_command(int ac, char *help)
{
	if (ac == 2 && my_strlen(help) == 2) {
		if (help[0] == '-' && help[1] == 'h') {
			my_putstr("USAGE\n");
			my_putstr("       ./calc base operators size_read\n\n");
			my_putstr("DESCRIPTION\n");
			my_putstr("       base       all the symbols of the");
			my_putstr(" base\n");
			my_putstr("       operators  the symbols for the ");
			my_putstr("parentheses and the 5 operators\n");
			my_putstr("       size_read  number of characters ");
			my_putstr("to be read\n");
			exit(EXIT_SUCCESS);
		}
	}
}

int main(int ac, char **av)
{
	char *expr;
	unsigned int size;

	help_command(ac, av[1]);
	if (ac != 4) {
		my_putstr("Usage: ./calc");
		my_putstr(" base ops \"()+_*/%\" exp_len\n");
		return (EXIT_USAGE);
	}
	check_base(av[1]);
	check_ops(av[2]);
	size = my_atoi(av[3]);
	expr = get_expr(size);
	my_put_nbr(eval_expr(av[1], av[2], expr, size));
	return (EXIT_SUCCESS);
}
