/*
** EPITECH PROJECT, 2017
** errors
** File description:
** Manage errors
*/

# include "../include/errors.h"

/**
** Check if the base and operators doesn't contains same characters
** @param (base_t) *base
** @param (operator_t) *ops
** @param (int) base_cnt
** @return (void)
**/
void check_base_and_operators(base_t *base, operator_t *ops, int base_cnt)
{
	for (int i = 0; i < 7; i++) {
		for (int ii = 0; ii < base_cnt; ii++) {
			if (ops[i].def == base[ii].def) {
				my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_BASE);
			}
		}
	}
}

/**
** Check if operators contains the two same operands
** @param (operator_t) *ops
** @return (void)
**/
void check_multiple_operators(operator_t *ops)
{
	operator_t *temp = ops;
	int i = 0;

	while (i < 7) {
		for (int ii = 0; ii < 7; ii++) {
			if (ops[i].def == temp[ii].def && i != ii) {
				my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_BASE);
			}
		}
		i++;
	}
}

/**
** Check if base contains the two same digits
** @param (base_t) *base
** @param (int) base_cnt
** @return (void)
**/
void check_multiple_base(base_t *base, int base_cnt)
{
	base_t *temp = base;
	for (int i = 0; i < base_cnt; i++) {
		for (int ii = 0; ii < base_cnt; ii++) {
			if (base[i].def == temp[ii].def && i != ii) {
				my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_BASE);
			}
		}
	}
}

/**
** Check if the number of parenthesis is correct
** @param (char) *str
** @return (void)
**/
void check_parenthesis(char *str)
{
	int parenthesis = 0;
	int offset = 0;
	while (str[offset] != 0) {
		if (str[offset] == '(') parenthesis++;
		else if (str[offset] == ')') parenthesis--;
		offset++;
	}
	if (parenthesis != 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}

/**
** Check if digits in the calculation is only contains on the base
** @param (base_t) *base
** @param (operator_t) *ops
** @param (int) base_cnt
** @param (char) *str
** @return (void)
**/
void check_unknown_digits(base_t *base, operator_t *ops,
			  char *str, int size)
{
	int offset = 0;
	int valid = 0;

	while (offset < size) {
		for (int i = 0; i < 7; i++)
			if (str[offset] == ops[i].def)
				valid++;
		offset++;
	}
	offset = 0;
	while (offset < size) {
		for (int j = 0; j < 10; j++)
			if (str[offset] == base[j].def)
				valid++;
		offset++;
	}
	if (valid < size) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}
