/*
** EPITECH PROJECT, 2017
** cat
** File description:
** Same tasks as system cat command (UNIX)
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int cat(int ac, char **av)
{
	if(ac < 2) {
		my_puterr("Please specify a file name.\n");
		return (84);
	}
	int file_desc = -1;
	char buffer[30000];
	int size = 0;
	for(int i = 1; i <= (ac - 1); i++) {
		file_desc = open(av[i], O_RDONLY);
		if(file_desc < 0) {
			my_puterr("Cannot locate file: ");
			my_puterr(av[i]);
			my_puterr("\n");
		} else {
			size = read(file_desc, buffer, sizeof(buffer));
			write(1, buffer, size);
			my_putchar('\n');
		}
		close(file_desc);
	}
	return (0);
}
