/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Displating one by one, the characters of a string (with pointers)
*/

void my_error(const char *str)
{
	int loop = 0;
	
	while (str[loop] != '\0') {
		write(2, &str[loop], 1);
		loop += 1;
	}
	write(2, '\n', 1);
}
