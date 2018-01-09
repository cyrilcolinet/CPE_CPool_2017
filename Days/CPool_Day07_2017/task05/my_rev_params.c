/*
** EPITECH PROJECT, 2017
** my_rev_params
** File description:
** Display all the arguments received on the command line in reverse order. Display all args including argv[0], on diffrent lines
*/

int main(int argc, char **argv)
{
	my_rev_params(argc, argv);
	return 0;
}

void my_rev_params(int args_nb, char **args)
{
	char **rev[999];
	int nb = args_nb - 1;
	
	for(int i = 0; i < args_nb; i++) {
		rev[i + 1] = args[nb];
		my_putstr(rev[i + 1]);
		my_putchar('\n');
		nb--;
	}
}
