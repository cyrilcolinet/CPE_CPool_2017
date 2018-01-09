/*
** EPITECH PROJECT, 2017
** bistro header
** File description:
** Bistro functions (header file)
*/

# ifndef BISTRO_H
# define BISTRO_H

# include "my.h"
# include "bistro-matic.h"
# include "utils.h"
# include "eval_expr.h"

char *convert_expr(base_t *base, operator_t *ops, char *exp, int cnt, int size);

char *get_based_result(base_t *base, char *res, int base_cnt, int size);

/**
 ** Get the default operator by offset
 ** @param (int) offset
 ** @return (char) c
 **/
char get_default_operator(int offset);

# endif
