/*
** EPITECH PROJECT, 2017
** finalstumper
** File description:
** final_stumper
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/final_stumper.h"
#include "include/match.h"

void text(int x, int y)
{
	my_put_nbr(x);
	my_putchar(' ');
	my_put_nbr(y);
}

void print_args(char *file, int x, int y)
{
	my_putchar('[');
	my_putstr(file);
	my_putchar(']');
	my_putchar(' ');
	text(x, y);
}

void print_result(int multiple, char **file, int column, int line)
{
	if(multiple == 1)
		print_args(file[0], column, line);
	else {
		for(int i = 0; i < multiple; i++) {
			print_args(file[i], column, line);
			if(i != multiple - 1)
				my_putstr(" || ");
		}
	}
	my_putchar('\n');
}

void check_value(int colone, int line, char *exp)
{
	int multiple = 0;
	char **file = malloc(sizeof(char **) * 5);

	if(match(rush_first(colone, line), exp))
		file[multiple++] = "rush1-1";
	if(match(rush_second(colone, line), exp))
		file[multiple++] = "rush1-2";
	if(match(rush_third(colone, line), exp))
		file[multiple++] = "rush1-3";
	if(match(rush_fourth(colone, line), exp))
		file[multiple++] = "rush1-4";
	if(match(rush_five(colone, line), exp))
		file[multiple++] = "rush1-5";

	if(multiple == 0)
		my_putstr("none\n");
	else
		print_result(multiple, file, colone, line);
}

void rush3 (char *exp)
{
	int len = my_strlen(exp) - 1;
	int line = 0;
	int i = 0;
	int colone;
	while (exp[i] != '\0') { 
		if (exp[i] == '\n')
			line++;
		i++;
	}
	colone = (len / line);
	check_value(colone, line, exp);
	return (0);
}
