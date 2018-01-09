/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** What's the language ?
*/

#include <unistd.h>
#include "my_rush2.h"

/**
 ** Put a caracter into console
 ** @param (char) c
 ** @return (void)
 **/
void my_putchar(char c)
{
        write(1, &c, 1);
}

/**
 ** Transform caracter into lowercase
 ** @param (char) c
 ** @return (char) c
 **/
char my_charlowcase(char c)
{
 	if (c >= 'A' && c <= 'Z')
                c = 'a' + c - 'A';
        return c;
}

/**
 ** Get the length of a string
 ** @param (char const) str
 ** @return (int) - The length of the string
 **/
int my_strlen(char const *str)
{
        int i = 0;
        while(str[i] != '\0')
                i++;
        return i;
}

/**
 ** Display a content of a string into console
 ** @param (const char) *str
 ** @return (void)
 **/
void my_putstr(const char *str)
{
        int len;
        if (str) {
                len = my_strlen(str);
                if (len > 0)
                        write(1, str, len);
        }
}

/**
 ** Get the number of ONLY letters into string
 ** @param (char const) *str
 ** @return (int) - The number of letters into the string
 **/
int my_strlen_without_trim(char const *str)
{
        int i = 0;
        int nb = 0;
        while (str[i] != '\0') {
                if (IS_BTWS(str[i], 'a', 'z') || IS_BTWS(str[i], 'A', 'Z'))
                        nb++;
                i++;
        }
        return nb;
}

/**
 ** Get the absolute value of number
 ** @param (int) n
 ** @return (int) - Absolute value
 **/
int my_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

/**
 ** Get the digital count
 ** @param (int) n
 ** @return (int) - Return the digits number
 **/
int my_digit_count(int n)
{
	int result = 0;
	int begin = 1;
	while (begin == 1 || n != 0) {
		begin = 0;
		n = n / 10;
		result = result + 1;
	}
	return (result);
}

/**
 ** Math power function(10, n)
 ** @param (int) n
 ** @return (int) - Return pow(10, n)
 **/
int my_power10(int n)
{
	int power = 1;
	power = 1;
	while (n > 1) {
		power = power * 10;
		n = n - 1;
	}
	return (power);
}

/**
 ** Put the number into the console
 ** @param (int) n
 ** @return (void)
 **/
void my_put_nbr(int n)
{
	int is_neg = 0;
	int mod;
	int digit_count;
	int tmp;
	if (n < 0) {
		is_neg = 1;
		my_putchar('-');
	}
	if (n < -2147483647)
		digit_count = my_digit_count(my_abs(n + 1));
	else
		digit_count = my_digit_count(my_abs(n));
	while (digit_count > 0) {
		tmp = n / my_power10(digit_count);
		mod = tmp % 10;
		if (is_neg)
			mod = -mod;
		my_putchar('0' + mod);
		digit_count = digit_count - 1;
	}
}

/**
 ** Get and print the language estimated (WIP)
 ** @param (float) freq
 ** @param (struct language) *lang
 ** @return (void)
 **/
void get_language(float freq, Lang *lang)
{
	int freq_int = freq;
	int arr_num = 10;
	
	for(int i = 0; i < 4; i++) {
		if(((int)lang[i].total) == freq_int) {
			arr_num = i;
			break;
		}
	}

	if(arr_num != 10)
		my_putstr(lang[arr_num].lang);
	else
		my_putstr("=> Unknown");
	my_putchar('\n');
}

/**
 ** Configure the language percentage
 ** @param (struct language) *lang
 ** @return (struct language) - Strcture
 **/
struct language *configure_lang(Lang *lang)
{
	lang[0].lang = "=> English";
	lang[0].total = 37.432;
	lang[1].lang = "=> French";
	lang[1].total = 36.975;
	lang[2].lang = "=> German";
        lang[2].total = 3666.975;
	lang[3].lang = "=> Spanish";
        lang[3].total = 366.975;
}

/**
 ** Display the result into the console
 ** @param (char) carac
 ** @param (int) size
 ** @param (float) freq
 ** @return (void)
 **/
void display_result(char carac, int size, float freq)
{
        my_putchar(carac);
        my_putchar(':');
        my_put_nbr(size);
        my_putchar(' ');
        my_putchar('(');
        my_put_nbr(freq);
        my_putchar('.');
        int decimal = ((freq * 100) - (((int)freq) * 100));
        my_put_nbr(decimal);
        if(decimal < 10)
                my_put_nbr(0);
        my_putchar('%');
        my_putchar(')');
        my_putchar('\n');
}

/**
 ** Rush main function
 ** @param (int) ac
 ** @param (char) **av
 ** @return (int) - Exit code
 **/
int rush2(int ac, char **av)
{
	Lang lang;
	configure_lang(&lang);

	if(ac < 3)
		return (84);
	int i = 2;
	int ii = 0;
	int size = 0;
	char carac = '?';
	int strlen = my_strlen_without_trim(av[1]);
	float freq = 0.00, total_freq = 0.00;
	for(i; i < ac; i++) {
		for(ii = 0; ii < my_strlen(av[1]); ii++) {
			carac = av[i][0];
			if(my_charlowcase(av[i][0]) == my_charlowcase(av[1][ii]))
				size++;
		}
		freq = (((float)size) * 100.00) / ((float)strlen);
		total_freq += freq;
		display_result(carac, size, freq);
		size = 0;
		carac = '?';
	}
	get_language(total_freq, &lang);
	return (0);
}

int main(int ac, char **av)
{
	return (rush2(ac, av));
}
