/*
** EPITECH PROJECT, 2017
** rush_fourth
** File description:
** Rush 1_4
*/

static void line(int l, int h)
{
	int i = 0;
	int n = 0;
	while(i < (h - 2)) {
		while(n < l) {
			if (n == 0 || n == (l - 1)) {
				my_putchar('B');
			} else {
				my_putchar(' ');
			}
			n++;
		}
		n = 0;
		my_putchar('\n');
		i++;
	}
}

static void ver_line(int y)
{
	int v = 0;
	while(v <= (y - 2)) {
		my_putstr("B\n");
		v++;
	}
}

static void hor_line(int x)
{
	int y = 1;
	for(int i = 1; i <= x; i++) {
		if(i == 1)
			my_putchar('A');
		else if(i == x)
			my_putchar('C');
		else
			my_putchar('B');
	}
	my_putchar('\n');
}

void rush_fourth(int x, int y)
{
	if(x <= 0 || y <= 0) {
		write(2, "Invalid size", 12);
		return (84);
	}
	if (x == 1 && y == 1) {
		my_putstr("B\n");
	} else if (y == 1) {
		hor_line(x);
	} else if (x == 1) {
		for(int i = 0; i < y; i++)
			my_putstr("B\n");
	} else {
		hor_line(x);
		line(x, y);
		hor_line(x);
	}
}
