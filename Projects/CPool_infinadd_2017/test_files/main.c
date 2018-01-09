/*
** EPITECH PROJECT, 2017
** main
** File description:
** Infinite addition main function
*/

#include "../include/my.h"
#include "../include/infin_add.h"
#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 3) {
		my_putstr(infin_add(av[1], av[2]));
		my_putchar('\n');
		return (0);
	}
	write(2, "Usage: ./infin_add <num1> <num2>\n", 33);
	return (84);
}
