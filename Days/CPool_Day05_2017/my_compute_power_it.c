/*
** EPITECH PROJECT, 2017
** my_compute_power_it
** File description:
** Iterative function that returns the first argument raised to the power p, where p is the second argument
*/

int my_compute_power_it(int nb, int p)
{
	int total = 1;
	if(p == 0)
		return 1;
	else if(p < 0)
		return 0;
	for(int loop = 0; loop < p; loop++) {
		total *= nb;
	}
	return (total);
}
