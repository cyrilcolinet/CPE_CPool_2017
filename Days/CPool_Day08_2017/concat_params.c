/*
** EPITECH PROJECT, 2017
** concat_params
** File description:
** Function that turns the command-line given arguments into a single string. Arguments are to be separed by carriage return
*/

#include <stdlib.h>

char *concat_params(int nb, char **args)
{
	char *ret = malloc(sizeof(char *) * (nb + 1));
	my_strcpy(ret, args[0]);
	for(int i = 1; i < nb; i++) {
		ret = my_strcat(ret, "\n");
		ret = my_strcat(ret, args[i]);
	}
	ret = my_strcat(ret, "\0");
	return ret;
}
