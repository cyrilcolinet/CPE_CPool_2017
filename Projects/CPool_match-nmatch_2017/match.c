/*
** EPITECH PROJECT, 2017
** match
** File description:
** Find out if two strings match
*/

#include "include/my.h"
#include "include/match.h"

/**
 ** Print error and exit
 ** @param (char) *err
 ** @return (int) - Exit program with exit_status
 **/
void print_error(char *err)
{
	write(2, err, my_strlen(err));
	my_putchar('\n');
	return 84;
}

/**
 ** Count the alphanumeric characters into the string
 ** @param (char const) *str
 ** @return (int) - The number of characters
 **/
int my_charlen(char const *str)
{
	int i = 0;
	int nb = 0;
	while (str[i] != '\0') {
		if (IS_BTWS(str[i], 'a', 'z') || IS_BTWS(str[i], 'A', 'Z') || str[i] == '*')
			nb++;
		i++;
	}
	return nb;
}

/**
 ** Check if str chontains character given as parameter
 ** @param (char) *str
 ** @param (char) c
 ** @return (int) - Return 1 if string contains character, and 0 otherwise
 **/
int str_contains_char(char *str, char c)
{
	int i = 0;
	while(str[i] != '\0') {
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

/**
 ** Find out if two strings match
 ** @param (char const) *s1
 ** @param (char const) *s2
 ** @return (int) - Return 1 if the strings match, and 0 otherwise
 **/
int match(char const *s1, char const *s2)
{
	int i = 0;
	char *s2_copy = s2;
	int edited = 0;
	if(s1[0] == '\0' || s2[0] == '\0')
		print_error("Strings can't be empty");
	if(!str_contains_char(s2, '*') && my_charlen(s1) != my_charlen(s2))
		return 0;
	while(s1[i] != '\0') {
		if(s2[i] == '*' && !edited) {
			for(int ch = i; ch < my_charlen(s1); ch++) {
				s2_copy[ch] = '*';
				edited = 1;
			}
		}
		if(s1[i] != s2[i] && s2_copy[i] != '*')
			return 0;
		i++;
	}
	return 1;
}
