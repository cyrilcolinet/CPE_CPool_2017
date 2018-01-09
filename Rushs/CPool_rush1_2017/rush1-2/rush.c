/*
** EPITECH PROJECT, 2017
** rush1-3
** File description:
** 
*/

void rush(int x, int y)
{
        if(x <= 0 || y <= 0) {
                my_error("Invalid size");
                return (-1);
        }

        if (x == 1 && y == 1) {
                my_putchar('*');
                my_putchar('\n');
        }
        else if (y == 1) {
                hor_line(x);
        }
        else if (x == 1) {
                hor_line(x);
                ver_line(y);
		d_line(x);
        } else {
                hor_line(x);
                line(x, y);
		d_line(x);
        }
}
