/*
** EPITECH PROJECT, 2017
** eval_expr header
** File description:
** Eval Expresion functions (header file)
*/

# ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include "my.h"
# include "bistro-matic.h"
# include "utils.h"
# include "bistro.h"
# include "errors.h"

/**
** Do simple operation
** @param (int) num1
** @param (int) num2
** @param (char) operator
** @return (int) - Operation result
**/
int do_simple_operation(int num1, int num2, char operator);

/**
** Calculation of number with a string
** (char **) str
** @return (int) - Return the result of calculation
**/
int number(char **str);

/**
** Summand calc
** (char **) str
** @return (int) - Return the result with priorities
**/
int summands(char **str);

/**
** Calcul of factors
** @param (char **) str
** @return (int) - Return the result of calcul of factors
**/
int factors(char **str);

/**
** Eval expr calc
** TODO: Remove spaces after transcripting
** (char *) str
** @return (int) - Result of calc
**/
int eval_expr(char *base, char *ops, char *expr, int size);

# endif
