/*
** EPITECH PROJECT, 2017
** test_units_base_dec
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/eval_expr.h"

Test(bistro, test26)
{
	char *base = "012*4+6789";
	char *ops = "()5-3/%";
	char *expr = "(+5+)3*4";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 340);
}

Test(bistro, test27)
{
	char *base = "hijklmnopq";
	char *ops = "abcdefg";
	char *expr = "dakpepobel";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -13224);
}

Test(bistro, test28)
{
	char *base = "012345 789";
	char *ops = "()+|*/%";
	char *expr = "| | |   ";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), -678);
}

Test(bistro, test29)
{
	char *base = "9876543210";
	char *ops = "abcdefg";
	char *expr = "6042671e7f521526c1531652d351725g3";
	int size = my_strlen(expr);
	cr_assert_eq(eval_expr(base, ops, expr, size), 8468359);
}
