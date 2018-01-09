/*
** EPITECH PROJECT, 2017
** unit
** File description:
** Unitary tests
*/

#include <criterion/criterion.h>
#include "../include/my.h"
#include "../include/final_stumper.h"

Test(final_stumper, test01) {
	cr_assert_str_eq(rush3("o\n"), "[rush1-1] 1 1", "%s");	
}

Test(final_stumper, test02) {
	cr_assert_str_eq(rush3("*****\n"), "[rush1-2] 5 1", "%s");	
}

Test(final_stumper, test03) {
	cr_assert_str_eq(rush3("*\n*\n*\n*\n"), "[rush1-2] 1 4", "%s");	
}

Test(final_stumper, test04) {
	cr_assert_str_eq(rush3("o---o\n"), "[rush1-1] 5 1", "%s");	
}

Test(final_stumper, test05) {
	cr_assert_str_eq(rush3("o--o/n|  |\no--o\n"), "[rush1-1] 4 3", "%s");	
}
