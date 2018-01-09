/*
** EPITECH PROJECT, 2017
** rush-v2
** File description:
** Rush src function
*/

void rush(int x, int y)
{
	if(x <= 0 || y <= 0) {
		my_error("Invalid size");
		return (-1);
	}

	if (x == 1 && y == 1) {
		my_putchar('B');
		my_putchar('\n');
	}
	else if (y == 1) {
		hor_line(x);
	}
	else if (x == 1) {
		hor_line(x);
		ver_line(y);
		hor_line(x);
	} else {
		hor_line(x);
		line(x, y);
		hor_line(x);
	}
}
