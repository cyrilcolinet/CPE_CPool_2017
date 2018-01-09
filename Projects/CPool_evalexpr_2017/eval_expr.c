/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** Evaluation expression (mathematics calculator)
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/eval_expr.h"

/**
 ** Do simple operation
 ** @param (int) num1
 ** @param (int) num2
 ** @param (char) operator
 ** @return (int) - Operation result
 **/
int do_simple_operation(int num1, int num2, char operator)
{
	int result = 0;
	if (operator == '+')
		result = num1 + num2;
	else if (operator == '-')
		result = num1 - num2;
	else if (operator == '*')
		result = num1 * num2;
	else if (operator == '/')
		result = num1 / num2;
	else if (operator == '%')
		result = num1 % num2;
	return (result);
}

/**
 ** Remove spaces present in a string
 ** TODO > Implements to library
 ** @param (char *) str
 ** @return (char) - Returns string without spaces
 **/
char *trim_spaces(char *str)
{
	int offset2 = 0;
	int offset1 = 0;
	char *res = malloc(sizeof(char *) * (my_strlen(str) + 1));
	while (str[offset1]) {
		if (str[offset1] != ' ')
			res[(offset2++)] = str[offset1];
		offset1++;
	}
	res[offset2] = 0;
	return (res);
}

/**
 ** Calculation of number with a string
 ** (char **) str
 ** @return (int) - Return the result of calculation
 **/
int number(char **str)
{
	int negative = 1;
	int number = 0;
	if ((*str)[0] == '+' || (*str)[0] == '-') {
		if ((*str)[0] == '-')
			negative = -1;
		(*str)++;
	}
	if ((*str)[0] == '(') {
		(*str)++;
		number = summands(str);
		if ((*str)[0] == ')')
			(*str)++;
		return (number * negative);
	}
	while ((*str)[0] >= '0' && (*str)[0] <= '9') {
		number = (number * 10) + ((*str)[0] - '0');
		(*str)++;
	}
	return (number * negative);
}

/**
 ** Summand calc
 ** (char **) str
 ** @return (int) - Return the result with priorities
 **/
int summands(char **str)
{
	int num1 = number(str);
	int num2;
	char operator;
	while ((*str)[0] != 0 && (*str)[0] != ')') {
		operator = (*str)[0];
		(*str)++;
		num2 = ((operator == '+' || operator == '-')
			? factors(str) : number(str));
		num1 = do_simple_operation(num1, num2, operator);
	}
	return (num1);
}

/**
 ** Calcul of factors
 ** @param (char **) str
 ** @return (int) - Return the result of calcul of factors
 **/
int factors(char **str)
{
	int num1 = number(str);
	char operator;

	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%') {
		operator = (*str)[0];
		(*str)++;
		num1 = do_simple_operation(num1, number(str), operator);
	}
	return (num1);
}

/**
 ** Eval expr calc
 ** (char *) str
 ** @return (int) - Result of calc
 **/
int eval_expr(char *str)
{
	str = trim_spaces(str);
	if (str[0] == 0)
		return (0);
	return (summands(&str));
}
