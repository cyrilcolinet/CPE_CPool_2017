/*
** EPITECH PROJECT, 2017
** my_print_alpha
** File description:
** Displaying lowercase alphabet in ASC order on  signle line
*/

int my_print_alpha(void)
{
	for (int i = 97; i < 123; i++) {
		my_putchar(i);
	}
	my_putchar('\n');
	return (0);
}
