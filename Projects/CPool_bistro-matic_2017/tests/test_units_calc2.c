/*
** EPITECH PROJECT, 2017
** test_units_calc
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/eval_expr.h"

Test(bistro, test06)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "(5+5)*34";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 340);
}

Test(bistro, test07)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "-(38*87)*4";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -13224);
}

Test(bistro, test08)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "-6-6-666";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -678);
}

Test(bistro, test09)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "3957328*2/478473+8468347-648274%6";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 8468359);
}

Test(bistro, test10)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "(123456789+921)*(-5)";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -617288550);
}
