/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** Infinite addition main file
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/infin_add.h"

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
 ** Do summation/addition (recursive method v2)
 ** @param (char *) str1
 ** @param (char *) str2
 ** @param (int) strlen1
 ** @param (int) strlen2
 ** @param (int) ret
 ** @return (void)
 **/
void do_summation(char const * const str1, char const * const str2, int strlen1, int strlen2, int ret) {
	char tmp;
	if (strlen1 >= 0 && strlen2 >= 0) {
		do_summation(str1, str2, --strlen1, --strlen2, get_sum_value(str1[strlen1], str2[strlen2], ret, &tmp));
	} else if (strlen1 >= 0) {
		do_summation(str1, str2, --strlen1, --strlen2, get_sum_value(str1[strlen1], '0', ret, &tmp));
	} else if (strlen2 >= 0) {
		do_summation(str1, str2, --strlen1, --strlen2, get_sum_value('0', str2[strlen2], ret, &tmp));
	} else {
		if (ret)
			ret_val[offset++] = '1';
		return;
	}
	ret_val[offset++] = tmp;
}

/**
 ** Set only one zero if result contains multi zero chars
 ** @param (char * const) str
 ** @return (char *) str
 **/
char *check_nil_value(char *str)
{
	int count = 0;
    int strlen = my_strlen(str);
    char *result = malloc(sizeof(char *) * (strlen + 1));
	if(str[0] == '0') {
		while(str[count] == '0')
			count++;
		if(count == strlen) {
            result[0] = '0';
            result[1] = '\0';
            return result;
        }
        for(int i = 0, j = count; i < strlen - count; i++, j++) {
            result[i] = str[j];
        }
        return result;
    }
	return str;
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
			return ("");
		do_summation(str1, str2, len1, len2, 0);
	ret_val[offset++] = '\0';
	ret_val[offset+1] = '\n';
	return (check_nil_value(ret_val));
}
