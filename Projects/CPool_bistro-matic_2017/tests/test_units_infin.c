/*
** EPITECH PROJECT, 2017
** test_units_infin
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../src/backups/infin.h"

Test(addition_infini, test01)
{
	char const * const str1 = "2345234567098";
	char const * const str2 = "987654334567890";
	cr_assert_eq(infin_add(str1, str2), "989999569134988");
}

Test(addition_infini, test02)
{
	char const * const str1 = "-34";
	char const * const str2 = "24";
	cr_assert_eq(infin_add(str1, str2), "14");
}

Test(addition_infini, test03)
{
	char const * const str1 = "-123454987";
	char const * const str2 = "-9876234575408";
	cr_assert_eq(infin_add(str1, str2), "-9876358030395");
}

Test(addition_infini, test04)
{
	char const * const str1 = "86";
	char const * const str2 = "434";
	cr_assert_eq(infin_add(str1, str2), "520");
}

/* Test(multi_infini, test01) */
/* { */
/* 	char num1 = "86"; */
/* 	char num2 = "434"; */
/* 	cr_assert_eq(infin_add(str1, str2), "37324"); */
/* } */

/* Test(multi_infini, test02) */
/* { */
/* 	char num1 = "765434567898765"; */
/* 	char num2 = "987654345"; */
/* 	cr_assert_eq(infin_add(str1, str2), "755984776798412772383925"); */
/* } */
