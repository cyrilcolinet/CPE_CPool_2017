/*
** EPITECH PROJECT, 2017
** test_units_ops
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/eval_expr.h"

Test(bistro, test11)
{
	char *base = "0123456789";
	char *ops = "()E-*/%";
	char *expr = "5E5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 10);
}

Test(bistro, test12)
{
	char *base = "0123456789";
	char *ops = "()+u*/%";
	char *expr = "5u5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 0);
}

Test(bistro, test13)
{
	char *base = "0123456789";
	char *ops = "()+-h/%";
	char *expr = "5h5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 25);
}

Test(bistro, test14)
{
	char *base = "0123456789";
	char *ops = "()+-*^%";
	char *expr = "5^5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 1);
}

Test(bistro, test15)
{
	char *base = "0123456789";
	char *ops = "()+-*/f";
	char *expr = "6f5";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 1);
}
