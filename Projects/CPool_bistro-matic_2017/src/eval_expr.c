/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** Evaluation expression (mathematics calculator)
*/

#include "../include/eval_expr.h"

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
		if (operator == '+' || operator == '-') num2 = factors(str);
		else num2 = number(str);
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
** TODO: Remove spaces after transcripting
** (char *) str
** @return (int) - Result of calc
**/
int eval_expr(char *base, char *ops, char *expr, int size)
{
	base_t *bs_l = convert_base(base);
	operator_t *op_l = convert_operators(ops);
	int baselen = my_strlen(base);
	check_base_and_operators(bs_l, op_l, baselen);
	check_multiple_operators(op_l);
	check_multiple_base(bs_l, baselen);
	check_unknown_digits(bs_l, op_l, expr, size);
	char *str = convert_expr(bs_l, op_l, expr, baselen, size);
	check_parenthesis(str);
	return (summands(&str));
}
