/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** My personnal library header
*/

#ifndef MY_H_
#define MY_H_

/**
 ** Check if number is negative or  positive
 ** @param (int) nb
 ** @return (int) - 1 if positive and 0 otherwise
 **/
int my_isneg(int nb);

/**
 ** Print number into console
 ** @param (int) nb
 ** @return (int) - Return 0
 **/
int my_put_nbr(int nb);

/**
 ** Swap two numbers with pointers
 ** @param (int) *a
 ** @param (int) *b
 ** @return (int) - Return 0
 **/
int my_swap(int *a, int *b);

/**
 ** Print string into console
 ** @param (char const) *str
 ** @return (int) - Return 0
 **/
int my_putstr(char const *str);

/**
 ** Get the length of a string
 ** @param (char const) *str
 ** @return (int) - Return the length of a string
 **/
int my_strlen(char const *str);

/**
 ** Get first number (negative or positive) into a string
 ** @param (char const) *str
 ** @return (int) - Return the number finded into the screen or 0
 **/
int my_getnbr(char const *str);

/**
 ** Calculate the power of a numbre
 ** @param (int) nb
 ** @param (int) power
 ** @return (int) - Result of calculation
 **/
int my_compute_power_rec(int nb, int power);

/**
 ** Claculate the square root of a number
 ** @param (int) nb
 ** @return (int) - Result of calculation
 **/
int my_compute_square_root(int nb);

/**
 ** Check if number is prime or not
 ** @param (int) nb
 ** @return (int) - Return 1 if the number is prime, and 0 otherwise
 **/
int my_is_prime(int nb);

/**
 ** Find the closest prime number
 ** @param (int) nb
 ** @return (int) - Return nb if number is prime, nd otherwise, return the closest prime number
 **/
int my_find_prime_sup(int nb);

/**
 ** Compare two strings
 ** @param (char const) *s1
 ** @param (char const) *s2
 ** @return (int) - Return 1 if the two strings equals, and 0 otherwise
 **/
int my_strcmp(char const *s1, char const *s2);

/**
 ** Compare n characters of two strings
 ** @param (char const) *s1
 ** @param (char const) *s2
 ** @return (int) - Return 1 if the n characters of the two strings equals, and 0 otherwise
 **/
int my_strncmp(char const *s1, char const *s2, int n);

/**
 ** Check if string is composed to ONLY alphanumerics characters
 ** @param (char const) *str
 ** @return (int) - Return 1 if the string contains only alphanumeric characters, and 0 otherwise
 **/
int my_str_isalpha(char const *str);

/**
 ** Check if string contains ONLY numeric characters
 ** @param (char const) *str
 ** @return (int) - Return 1 if the string contains only numeric characters, and 0 otherwise
 **/
int my_str_isnum(char const *str);

/**
 ** Check if the string contains only lowercase characters
 ** @param (char const) *str
 ** @return (int) - Return 1 if the string contains only lowercase characters, and 0 otherwise
 **/
int my_str_islower(char const *str);

/**
 ** Check if the string contains only uppercase characters
 ** @param (char const) *str
 ** @return (int) - Return 1 if the string contains only uppercase characters, and 0 otherwise
 **/
int my_str_isupper(char const *str);

/**
 ** Check if the string can be printable in the console
 ** @param (char const) *str
 ** @return (int) - Return 1 if the string is printable and 0 otherwise
 **/
int my_str_isprintable(char const *str);

/**
 ** Print string (hexa/char)
 ** @param (char const) *str
 ** @return (int) - Return 0. If the string contains non-printable characters, must be
 ** be printed hexadecimally (in lowercase letters)
 **/
int my_showstr(char const *str);

/**
 ** Print memory dump
 ** @param (char const) *str
 ** @param (int) size
 ** @return (int) - Return 0
 **/
int my_showmem(char const *str, int size);

/**
 ** Copy string into another
 ** @param (char) *dest
 ** @param (char const) *src
 ** @return (char) - The copied string
 **/
char *my_strcpy(char *dest, char const *src);

/**
 ** Copy n characters of string into another
 ** @param (char) *dest
 ** @param (char const) *src
 ** @param (int) n
 ** @return (char) - Return the n characters copied string into another
 **/
char *my_strncpy(char *dest, char const *src, int n);

/**
 ** Reverse string
 ** @param (char) *str
 ** @return (char) - Return the reverted string
 **/
char *my_revstr(char *str);

/**
 ** Find the first occurence ofthe substring  to_find in the string str. The terminated '\0'
 ** characters are not compared.
 ** @param (char const) *str
 ** @param (char const) *to_find
 ** @return (char) - Return pointer to the first occurence in str of ony of the entire sequence
 ** of characters specified id to_find, or a null pointer if teh sequence is not present in
 ** str.
 **/
char *my_strstr(char const *str, char const *to_find);

/**
 ** Transform all lowercases letters into capital letters
 ** @param (char) *str
 ** @return (char) - Return string with only uppercase letters
 **/
char *my_strupcase(char *str);

/**
 ** Tranform all uppercase letters into lowercase letters
 ** @param (char) *str
 ** @return (char) - Return string with only lowercase letters
 **/ 
char *my_strlowcase(char *str);

/**
 ** Set the first letters of each words containing in a string
 ** @param (char) *str
 ** @return (char) - Return the string with all the first letters of each words in uppercase
 **/
char *my_strcapitalize(char *str);

/**
 ** Concatenate string into only one string
 ** @param (char) *dest
 ** @param (char const) *src
 ** @return (char) - Return the concatenated string
 **/
char *my_strcat(char *dest, char const *src);

/**
 ** Concatenate n charactes of string into one string
 ** @param (char) *dest
 ** @param (char const) *src
 ** @param (int) n
 ** @return (char) - Return the concatenated string only the n characters)
 **/
char *my_strncat(char *dest, char const *src, int n);

/**
 ** Print only one character into console
 ** @param (char) c
 ** @return (void)
 **/
void my_putchar(char c);

/**
 ** Sort integer array (in ascending order) 
 ** @param (int) *array
 ** @param (int) size
 ** @return (void)
 **/
void my_sort_int_array(int *array, int size);

/**
 ** Print error (on the stderr output)
 ** @param (char) *str
 ** @return (void)
 **/
void my_printerr(char *str);

#endif
