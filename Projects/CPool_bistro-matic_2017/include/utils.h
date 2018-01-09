/*
** EPITECH PROJECT, 2017
** utils header
** File description:
** Utils function (header file)
*/

# ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

# include "bistro-matic.h"
# include "my.h"
# include "bistro.h"

/**
 ** Check base if available
 ** @param (char *) base
 ** @return (void)
 **/
void check_base(char *base);

/**
 ** Get expression (with read)
 ** @param (unsigned int) size
 ** @return (char *)
 **/
void check_ops(char *ops);

/**
 ** Check if count of operators in OK
 ** @param (char *ops)
 ** @return (void)
 **/
char *get_expr(unsigned size);

/**
 ** Convert string base to base_t list
 ** @param (char *) base
 ** @return (base_t *) base_lit
 **/
base_t *convert_base(char *base);

/**
 ** Convert string operators to operator_t list
 ** @param (char *) ops
 ** @return (operator_t *) operator_list
 **/
operator_t *convert_operators(char *ops);

# endif
