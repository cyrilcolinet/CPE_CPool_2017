/*
** EPITECH PROJECT, 2017
** my_prient_com2
** File description:
** Display all the different combinations of two two-digits numbers (in ASC order)
*/

int my_print_comb2(void)
{
	for(int a = 48; a <= 57; a++) {
		for(int b = 48; b <= 57; b++) {
			for(int c = 48; c <= 57; c++) {
				for(int d = 48; d <= 57; d++) {
					if((b < d && a <= c) ||
					   (b <= d && a < c) || (b >= d && a > c)) {
						my_putchar(a);
						my_putchar(b);
						my_putchar(' ');
						my_putchar(c);
						my_putchar(d);
						if(!(a == 57 &&
						     b == 56 &&
						     c == 57 && d == 57)) {
							my_putchar(44);
							my_putchar(32);
						}
					}
				}
			}
		}
	}
	my_putchar('\n');
	return (0);	
}
