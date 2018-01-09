/*
** EPITECH PROJECT, 2017
** eval_expr header
** File description:
** Eval Expresion functions (header file)
*/

#ifndef EVAL_EXPR_H
#define EVAL_EXPR_H

int do_simple_operation(int num1, int num2, char operator);

char *trim_spaces(char *str);

int number(char **str);

int summands(char **str);

int factors(char **str);

int eval_expr(char *str);

#endif
