/*
** EPITECH PROJECT, 2017
** my_getnbr_base
** File description:
** Converts and returns a number (provided as a string) ina iven base into a decimal number
*/

static int is_valid_digit(char c, char *base)
{
	int i = 0;
	while (base[i] != '\0') {
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

static char *find_first_digit(char *str, char *base)
{
	int i = 0;
	while (str[i] != '\0') {
		if (is_valid_digit(str[i], base))
			return (&str[i]);
		i++;
	}
	return (0);
}

static int get_digit_weight(char c, char *base)
{
	int i = 0;
	while (base[i] != '\0') {
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int my_getnbr_base(char *str, char *base)
{
	char *start;
	int result;
	int len;
	int i;
	if (str[0] == '\0' || base[0] == '\0')
		return (0);
	start = find_first_digit(str, base);
	result = get_digit_weight(*start, base);
	start++;
	len = my_strlen(base);
	i = 0;
	while (start[i] != '\0' && is_valid_digit(start[i], base)) {
		result = result * len + get_digit_weight(start[i], base);
		i++;
	}
	if (str[0] == '-')
		result = -result;
	return (result);
}
