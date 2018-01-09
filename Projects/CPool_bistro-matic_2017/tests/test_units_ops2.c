/*
** EPITECH PROJECT, 2017
** test_units_ops
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/eval_expr.h"

Test(bistro, test16)
{
	char *base = "0123456789";
	char *ops = "d)t-G/%";
	char *expr = "d5t5)G34";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 340);
}

Test(bistro, test17)
{
	char *base = "0123456789";
	char *ops = "az+-k/%";
	char *expr = "-a38k87zk4";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -13224);
}

Test(bistro, test18)
{
	char *base = "0123456789";
	char *ops = "()+w*/%";
	char *expr = "w6w6w666";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -678);
}

Test(bistro, test19)
{
	char *base = "0123456789";
	char *ops = "()%o-g+";
	char *expr = "3957328-2g478473%8468347o648274+6";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 8468359);
}

Test(bistro, test20)
{
	char *base = "0123456789";
	char *ops = ")(+KT/%";
	char *expr = ")123456789+921(T)K5(";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -617288550);
}
