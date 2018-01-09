/*
** EPITECH PROJECT, 2017
** test_units_base_dec
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/eval_expr.h"

Test(bistro, test21)
{
	char *base = "01234y6789";
	char *ops = "()+-*/%";
	char *expr = "y+y";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 10);
}

Test(bistro, test22)
{
	char *base = "abcd4=uje9";
	char *ops = "()+-*/%";
	char *expr = "=-=";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 0);
}

Test(bistro, test23)
{
	char *base = "abcdefghij";
	char *ops = "()+-*/%";
	char *expr = "f*f";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 25);
}

Test(bistro, test24)
{
	char *base = "01234 6789";
	char *ops = "()+-*/%";
	char *expr = " / ";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 1);
}

Test(bistro, test25)
{
	char *base = "01234kf789";
	char *ops = "()+-*/%";
	char *expr = "f%k";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 1);
}
