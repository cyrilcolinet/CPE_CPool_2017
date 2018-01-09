/*
** EPITECH PROJECT, 2017
** do_op
** File description:
** Do operation 
*/

#include "../include/my.h"
#include "../include/my_opp.h"

int check_params(int ac, char** av)
{
	if(ac != 4)
		return (0);
	if(my_getnbr(av[1]) == 0 || my_getnbr(av[3]) == 0)
		return (0);
	return (1);
}

int is_opp(char* str)
{
	int i = 0;
	while(i < 5) {
		if(my_strcmp(str, gl_opptab[i].opp) == 0)
			return (i);
		i++;
	}
	return (i);
}

void do_op(char* num_1, char* opp, char* num_2)
{
	int opp_ind = is_opp(opp);
	gl_opptab[opp_ind].fct(my_getnbr(num_1), my_getnbr(num_2));
	my_putchar('\n');
}

int main(int argc, char** argv)
{
	if(!check_params(argc, argv)) {
		putline("0");
		return (0);
	}
	do_op(argv[1], argv[2], argv[3]);
	return (0);
}
