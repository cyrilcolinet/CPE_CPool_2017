/*
** EPITECH PROJECT, 2017
** get_color
** File description:
** Function that returns the color ad an int by handling its three RGB components
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
	int rgb_value = red;
	rgb_value += (green * 256);
	rgb_value += (blue * 256 * 246);

	return (rgb_value);
}
