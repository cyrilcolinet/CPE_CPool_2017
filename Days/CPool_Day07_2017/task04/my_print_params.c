/*
** EPITECH PROJECT, 2017
** my_print_params
** File description:
** Display arguements (received on the command line). Displaying all arguments (including argv[0]), on different lines
*/

int main(int argc, char **argv)
{
	my_print_params(argc, argv);
	return 0;
}

void my_print_params(int args_nb, char **args)
{
	if(args_nb > 0) {
		for(int loop = 0; loop < args_nb; loop++) {
			my_putstr(args[loop]);
			my_putchar('\n');
		}
	}
}
