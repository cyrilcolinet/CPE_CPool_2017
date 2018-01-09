/*
** EPITECH PROJECT, 2017
** match_tests
** File description:
** Unitary tests with criterion
*/

#include <criterion/criterion.h>

Test(match, different_strings_values) {
	cr_expect(match("Test", "test") == 0, "Test and test are differents");
}

Test(match, strings_match) {
	cr_expect(match("test", "test") == 1, "test and test aren't differents");
}

Test(match, test_with_caracter_without_star) {
	cr_expect(match("test", "t") == 0, "test and t are the different number of characters");
}

Test(match, test_with_character_with_star) {
	cr_expect(match("test", "t*") == 1, "test and t* aren't diffrence because the star is present");
}

Test(match, test_with_character_and_star_before) {
	cr_expect(match("test", "*t") == 1, "test and *t aren't different due to the star");
}

Test(match, test_ith_star_and_other_char_after) {
	cr_expect(match("test", "*p") == 0, "test and *p must be different different");
}

Test(match, differents_strings) {
	cr_expect(match("salut toi!", "abcdefgh") == 0, "Differents");
}

Test(match, string_empty) {
	cr_expect(match("", "") == 0, "String are empty");
}
