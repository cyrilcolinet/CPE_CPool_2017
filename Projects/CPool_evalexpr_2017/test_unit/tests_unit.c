/*
** EPITECH PROJECT, 2017
** tests_infin_add
** File description:
** tests_unit
*/

#include <criterion/criterion.h>


Test(EvalExpr, test1) {

	char *str= "3+5";
	cr_assert_eq(eval_expr(str), 8);
}

Test(EvalExpr, test2) {

	char *str = "4+5*5";
	cr_assert_eq(eval_expr(str), 29);
}

Test(EvalExpr, test3) {

	char *str = "(3+6)-5*5";
	cr_assert_eq(eval_expr(str), -16);
}

Test(EvalExpr, test4) {

	char *str = "5/1";
	cr_assert_eq(eval_expr(str), 5);
}

Test(EvalExpr, test5) {

	char *str = "9%2";
	cr_assert_eq(eval_expr(str), 1);
}

Test(EvalExpr, test6) {

	char *str = "-4+2";
	cr_assert_eq(eval_expr(str), -2);
}

Test(EvalExpr, test7) {

	char *str = "-4+4";
	cr_assert_eq(eval_expr(str), 0);
}

Test(EvalExpr, test8) {

	char *str = "4-6";
	cr_assert_eq(eval_expr(str), -2);
}

Test(EvalExpr, test9) {

	char *str = "3+9*4/4";
	cr_assert_eq(eval_expr(str), 12);
}

Test(EvalExpr, test10) {

	char *str = "(3+3)+(3-3)+(4+2)";
	cr_assert_eq(eval_expr(str), 12);
}

Test(EvalExpr, test11) {

	char *str = "5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5+5";
	cr_assert_eq(eval_expr(str), 190);
}

Test(EvalExpr, test12) {

	char *str = "3*5/6+20757*57/2-276448+8834";
	cr_assert_eq(eval_expr(str), 323962);
}
