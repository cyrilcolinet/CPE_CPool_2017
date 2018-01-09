#define IS_BTWS(value, a, b) ((value) >= (a) && (value) <= (b))

void print_error(char *err);

int my_charlen(char const *str);

/**
 ** FInd out if two strings match
 ** @param (char const) *s1
 ** @param (char const) *s2
 ** @return (int) - Return 1 if the strings match, and 0 otherwise
 **/
int match(char const *s1, char const *s2);
