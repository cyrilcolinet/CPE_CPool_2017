/*
** EPITECH PROJECT, 2017
** test_units_calc
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/eval_expr.h"

Test(bistro, test01)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "5+5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 10);
}

Test(bistro, test02)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "5-5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 0);
}

Test(bistro, test03)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "5*5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 25);
}

Test(bistro, test04)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "5/5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 1);
}

Test(bistro, test05)
{
	char *base = "0123456789";
	char *ops = "()+-*/%";
	char *expr = "6%5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 1);
}
