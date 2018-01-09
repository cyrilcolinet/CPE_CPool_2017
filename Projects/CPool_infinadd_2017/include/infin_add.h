/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** Header file for infin_add.c file
*/

#ifndef INFIN_ADD_H
#define INFIN_ADD_H

/**
 ** Get value from characters (only summation)
 ** @param (char) first
 ** @param (char) second
 ** @param (int) ret
 ** @param (char *) char_ret
 ** @return (int) ret
 **/
int get_sum_value(char first, char second, int ret, char *char_ret);

/**
 ** Do summation/addition (recursive method v2)
 ** @param (char *) str1
 ** @param (char *) str2
 ** @param (int) strlen1
 ** @param (int) strlen2
 ** @param (int) ret
 ** @return (void)
 **/
void do_summation(char const * const str1, char const * const str2, int strlen1, int strlen2, int ret);

/**
 ** Set only one zero if result contains multi zero chars
 ** @param (char * const) str
 ** @return (char *) str
 **/
char *check_nil_value(char *str);

/**
 ** Calculate infinite number (without limitation of numbers)
 ** @param (char const * const) str1
 ** @param (char const * const) str2
 ** @return (char *) ret_val
 **/
char *infin_add(char const * const str1, char const * const str2);

#endif
