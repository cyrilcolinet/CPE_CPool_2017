/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** Iterative function that returns the factorial of the number given as a parameter
*/

int my_compute_factorial_it(int nb)
{
	int loop;
	long result = 1;
	if(nb == 0)
                return 1;
        else if(nb < 0)
                return 0;
	for(loop = 1; loop <= nb; loop++)
		result *= loop;
	if(result > 2147483647)
		return 0;
	return (int) result;
}
