/*
** EPITECH PROJECT, 2017
** line
** File description:
** 
*/
	
void line(int l, int h)
{
	int i = 0;
	int n = 0;
	
	while(i < (l - 2)) {
		while(n <= l) {
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

void ver_line(int y)
{
        int v = 0;
	
        while(v <= (y - 2)) {
                my_putchar('B');
                my_putchar('\n');
                v++;
        }
}

void hor_line(int x)
{
        int y = 1;

        for(int i = 1; i <= x; i++) {
                if(i == 1 )
                        my_putchar('A');
		else if(i == x) {
			my_putchar('C');
		}
                else
                        my_putchar('B');
        }

        my_putchar('\n');
}


