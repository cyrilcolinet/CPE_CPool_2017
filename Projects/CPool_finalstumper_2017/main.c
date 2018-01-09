/*
** EPITECH PROJECT, 2017
** main
** File description:
** Main function
*/

#include <unistd.h>
#include "include/my.h"
#include "include/final_stumper.h"

int main()
{
	char buff[BUFF_SIZE + 1];
	int offset = 0;
	int len;

	while((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0) {
		offset += len;
	}
	buff[offset] = 0;
	if(len < 0)
		return (84);
	rush3(buff);
	return (0);
}
