/*
** EPITECH PROJECT, 2017
** tree
** File description:
** Display fir tree with given argument passed in parameter
*/

/*
 * Calculation of power
 * @param (int) nb
 * @param (int) exp
 * @return (int)
 */
int power(int nb, int exp)
{
	if(exp == 0)
		return 1;
	else if(exp < 0)
		return 0;
	return (nb * power(nb, (exp - 1)));
}

/*
 * Print blank (spaces)
 * @param (int) spaces
 * @return (int)
 */
int print_blank(int spaces)
{
	int space;
	for(space = 0; space < spaces; space++)
		my_putchar(32);
	return space - 1;
}

/*
 * Print branch of the fir tree
 * @param (int) first
 * @param (int) lines
 * @param (int) space
 * @return (int)
 */
int print_branch(int first, int lines, int space)
{
	int arr_chars[999];
	int chars = first;
	for(int i = 0; i < lines; i++) {
		space = print_blank(space);
		for(int nb = 0; nb < chars; nb++)
			my_putchar(42);
		arr_chars[i] = chars;
		chars += 2;
		space -+ 1;
		my_putchar(10);
	}
	return (arr_chars[(lines - 1)] - 2);
}

/*
 * Print the trunk of the fir tree
 * @param (int) size
 * @param (int) max_spaces
 */
void print_trunc(int size, int max_spaces)
{
	int substract = 0;
	if(size % 2 == 0) {
		size += 1;
		substract = 1;
	} else if(size == 3)
		substract = 1;
	for(int i = 0; i < (size - substract); i++) {
		for(int ii = 0; ii < (max_spaces - substract); ii++)
			my_putchar(32);
		for(int iii = 0; iii < size; iii++)
			my_putchar(124);
		my_putchar(10);
	}
}

/*
 * Main function of program
 * @param (int) size
 */
void tree(int size)
{
        int y = 4;
        int n = 1;
        int jump = 0;
        int max_spaces = (size * 3) + ((size == 5) ? 2 : 0);
        int gap = 0;
        int power_exp = 2;
        if(size == 0 || size < 0)
                return;
        if(size > 5)
                for(int i = 0; i < size; i++) {
                        max_spaces += power(2, power_exp);
                        power_exp *= 2;
                }
        else if(size == 4)
                max_spaces += 1;
        for(int i = 1; i <= size; i++) {
                if(i % 2 == 0) {
                        jump += 2;
                        gap += 1;
                        max_spaces -= 1;
                }
                n = print_branch(n, y, max_spaces) - jump;
                y += 1;
                max_spaces -= 1 + gap;
        }
        print_trunc(size, (size * 3));
}
