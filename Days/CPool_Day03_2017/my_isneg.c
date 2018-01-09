/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** Check if number is negative or positive
*/

int my_isneg(int n)
{
	if (n < 0) {
		my_putchar('N');
		return 1;
	} else {
		my_putchar('P');
		return 0;
	}
}
