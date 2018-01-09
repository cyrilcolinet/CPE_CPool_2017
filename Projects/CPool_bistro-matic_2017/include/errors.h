/*
** EPITECH PROJECT, 2017
** errors header
** File description:
** Errors (header function)
*/

# ifndef ERRORS_H
# define ERRORS_H

# include <stdlib.h>

# include "bistro-matic.h"
# include "my.h"

/**
** Check if the base and operators doesn't contains same characters
** @param (base_t) *base
** @param (operator_t) *ops
** @param (int) base_cnt
** @return (void)
**/
void check_base_and_operators(base_t *base, operator_t *ops, int base_cnt);

/**
** Check if operators contains the two same operands
** @param (operator_t) *ops
** @return (void)
**/
void check_multiple_operators(operator_t *ops);

/**
** Check if base contains the two same digits
** @param (base_t) *base
** @param (int) base_cnt
** @return (void)
**/
void check_multiple_base(base_t *base, int base_cnt);

/**
** Check if the number of parenthesis is correct
** @param (char) *str
** @return (void)
**/
void check_parenthesis(char *str);

/**
** Check if the number of parenthesis is correct
** @param (char) *str
** @return (void)
**/
void check_unknown_digits(base_t *base, operator_t *ops, char *str, int size);

# endif
