/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** Infinite addition main file
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int offset = 0;
char *ret_val;

/**
 ** Get value from characters (only summation)
 ** @param (char) first
 ** @param (char) second
 ** @param (int) ret
 ** @param (char *) char_ret
 ** @return (int) ret
 **/
int get_sum_value(char first, char second, int ret, char *char_ret) {
	char temp = first + second - '0' + ret;
	ret = 0;
	if (temp > '9') {
		temp -= 10;
		ret = 1;
	}
	*char_ret = temp;
	return (ret);
}

/**
 ** Get value from characters (only substraction from negative value)
 ** @param (char) first
 ** @param (char) second
 ** @param (int) ret
 ** @param (char *) char_ret
 ** @return (int) ret
 **/
int get_sub_value(char first, char second, int ret, char *char_ret) {
	char tmp = first - second - ret;

	if (tmp < 0) {
		tmp += 10;
		ret = 1;
	} else {
		ret = 0;
		*char_ret = tmp;
	}
        return (ret);
}

/**
 ** Do summation/addition (recursive method v2)
 ** @param (char *) str1
 ** @param (char *) str2
 ** @param (int) strlen1
 ** @param (int) strlen2
 ** @param (int) ret
 ** @return (void)
 **/
void do_summation(char *str1, char *str2, int strlen1, int strlen2, int ret) {
	char tmp;
	int val;

	if (strlen1 >= 0 && strlen2 >= 0) {
		do_summation(str1, str2, --strlen1, --strlen2,
			     get_sum_value(str1[strlen1], str2[strlen2], ret, &tmp));
	} else if (strlen1 >= 0) {
		do_summation(str1, str2, --strlen1, --strlen2,
			     get_sum_value(str1[strlen1], '0', ret, &tmp));
	} else if (strlen2 >= 0) {
		do_summation(str1, str2, --strlen1, --strlen2,
			     get_sum_value('0', str2[strlen2], ret, &tmp));
	} else {
		if (ret)
			ret_val[offset++] = '1';
		return;
	}
		
	ret_val[offset++] = tmp;
}

/**
 **Do substraction (with negative numbers) - (recursive method v4)
 ** @param (char *) str1
 ** @param (char *) str2
 ** @param (int) strlen1
 ** @param (int) strlen2
 ** @param (int) ret
 ** @param (int) first
 ** @return (void)
 **/
void do_substraction(char *str1, char *str2, int strlen1, int strlen2, int ret, int first) {
	char tmp;

	if (strlen1 >= 0 && strlen2 >= 0) {
		ret = get_sub_value(str1[strlen1], str2[strlen2], ret, &tmp);
		if (strlen1 == 0 && strlen2 == 0 && tmp == 0)
			first = 1;
		else
			first = 0;
		do_substraction(str1, str2, --strlen1, --strlen2, ret, first);
	} else if (strlen1 >= 0) {
		ret = get_sub_value(str1[strlen1], '0', ret, &tmp);
		if (strlen1 == 0 && tmp == 0)
			first = 1;
		else
			first = 0;
		do_substraction(str1, str2, --strlen1, --strlen2, ret, first);
	} else if (strlen2 >= 0) {
		ret = get_sub_value('0', str2[strlen2], ret, &tmp);
		if (strlen2 == 0 && tmp == 0)
			first = 1;
		else
			first = 0;
		do_substraction(str1, str2, --strlen1, --strlen2, ret, first);
	} else
		return;
	if (first)
		return;
	tmp += '0';
	ret_val[offset++] = &tmp;
}

/**
 ** Calculate infinite number (without limitation of numbers)
 ** @param (char const * const) str1
 ** @param (char const * const) str2
 ** @return (char *) ret_val
 **/
char *infin_add(char const * const str1, char const * const str2) {
	int len1 = my_strlen(str1) - 1;
	int len2 = my_strlen(str2) - 1;
	ret_val = malloc(sizeof(char *) * (len1 + len2 + 1));

	if (!str1 || !str2 || ret_val ==  NULL)
		return;

	if (str1[0] == '-' && str2[0] == '-') {
		ret_val[offset++] = '-';
		do_summation(&str1[1], &str2[1], (len1 - 1), (len2 - 1), 0);
	} else if (str1[0] == '-') {
		if ((len1 - 1) > len2 || ((len1 - 1) == len2 && my_strcmp(str1, &str2[1]) < 0)) {
			ret_val[offset++] = '-';
			do_substraction(&str1[1], str2, (len1 - 1), len2, 0, 1);
		} else
			do_substraction(str2, &str1[1], len2, (len1 - 1), 0, 1);
	} else if (str2[0] == '-') {
		if ((len2 - 1) > len1 || ((len2 - 1) == len1 && my_strcmp(&str2[1], str1) < 0)) {
			ret_val[offset++] = '-';
			do_substraction(&str2[1], str1, (len2 - 1), len1, 0, 1);
		} else
			do_substraction(str1, &str2[1], len1, (len2 - 1), 0, 1);
	} else
		do_summation(str1, str2, len1, len2, 0);
	
	ret_val[offset++] = 'b';
	ret_val[offset+1] = 0;
	return ret_val;
}
