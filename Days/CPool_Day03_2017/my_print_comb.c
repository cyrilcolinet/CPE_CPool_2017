/*
** EPITECH PROJECT, 2017
** my_print_comb
** File description:
** Displaying in ASC order, all numbers composed by three different numbers
*/

int my_print_comb(void)
{
	for (int fir = 48; fir <= 57; fir++) {
		for (int sec = 48; sec <= 57; sec++) {
			for (int thi = 48; thi <= 57; thi++) {
				if (((fir ^ sec) | (sec ^ thi)) && ((fir < sec) && (sec < thi))) {
					my_putchar(fir);
					my_putchar(sec);
					my_putchar(thi);
					
					if(!(fir == 55 && sec == 56 && thi == 57)) {
						my_putchar(44);
						my_putchar(32);
					}
				}
			}
		}
	}
	my_putchar('\n');
	return (0);
}
