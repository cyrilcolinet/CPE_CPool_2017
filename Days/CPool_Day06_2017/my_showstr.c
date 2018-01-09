/*
** EPITECH PROJECT, 2017
** my_showstr
** File description:
** Show str
*/

void my_showstr(char *str)
{
	int i = 0;
	char *base = "0123456789abcdef";
	char test[2];
	test[1] = '\0';
	while (str[i] != '\0') {
		test[0] = str[i];
		if (!my_str_isprintable(test)) {
			my_putchar('\\');
			if (str[i] < 16)
				my_putchar('0');
			my_putnbr_base(str[i], base);
		} else
			my_putchar(str[i]);
		i++;
	}
}
