/*
** EPITECH PROJECT, 2017
** my_print_revalpha
** File description:
** Displaying lowercase alphabet in DESC order on signle line
*/

void my_print_revalpha(void)
{
	for (int i = 122; i > 96; i--) {
		my_putchar(i);
	}
	my_putchar('\n');
	return (0);
}
