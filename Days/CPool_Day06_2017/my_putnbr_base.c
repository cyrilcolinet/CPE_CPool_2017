/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Function that converts and display a decimal number into a number in a given base
*/

int my_putnbr_base(int nbr, char *base)
{
	int size = 0;
	int mod;
	while (base[size] != '\0')
		size++;
	if (size <= 1)
		return (nbr);
	mod %= size;
	if (mod < 0)
		mod = -mod;
	if (nbr / size == 0) {
		if (nbr < 0)
			my_putchar('-');
		my_putchar(base[mod]);
		return (nbr);
	}
	my_putnbr_base(nbr / size, base);
	my_putchar(base[mod]);
	return (nbr);
}
