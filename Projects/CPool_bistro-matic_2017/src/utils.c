/*
** EPITECH PROJECT, 2017
** utils
** File description:
** Utils functions
*/

#include "../include/utils.h"
/*
** Check base if available
** @param (char *) base
** @return (void)
*/
void check_base(char *base)
{
	if (my_strlen(base) < 2) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}

/*
** Get expression (with read)
** @param (unsigned int) size
** @return (char *)
*/
char *get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_SIZE_NEG);
	}
	expr = my_malloc(size + 1);
	if (read(0, expr, size) != size) {
		my_putstr(ERROR_MSG);
		exit(EXIT_READ);
	}
	expr[size] = '\0';
	return (expr);
}

/**
 ** Check if count of operators in OK
 ** @param (char *ops)
 ** @return (void)
 **/
void check_ops(char *ops)
{
	if (my_strlen(ops) != 7) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
}

/**
 ** Convert string base	to base_t list
 ** @param (char *) base
 ** @return (base_t *) base_lit
 **/
base_t *convert_base(char *base)
{
	base_t *base_list = my_malloc(sizeof(base_t *));

	for (int i = 0; i < my_strlen(base); i++) {
		base_list[i].def = base[i];
		base_list[i].num = i + '0';
	}
	return (base_list);
}

/**
 ** Convert string operators to operator_t list
 ** @param (char *) ops
 ** @return (operator_t *) operator_list
 **/
operator_t *convert_operators(char *operator)
{
	char operator_char;
	operator_t *operator_list = my_malloc(sizeof(operator_t *));

	for (int i = 0; i < my_strlen(operator); i++) {
		operator_char = get_default_operator((i + 1));
		operator_list[i].def = operator[i];
		operator_list[i].oper = operator_char;
	}
	return (operator_list);
}
