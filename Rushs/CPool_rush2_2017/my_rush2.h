#define IS_BTWS(value, a, b) ((value) >= (a) && (value) <= (b))

typedef struct language Lang;

/**
 ** Language struct
 ** @param (char) *lang
 ** @param (float) one
 ** @param (float) two
 ** @param (float) three
 ** @param (float) four
 **/
struct language {
	char *lang;
	float total;
};

/**
 ** Put a caracter into console
 ** @param (char) c
 ** @return (void)
 **/
void my_putchar(char c);

/**
 ** Transform caracter into lowercase
 ** @param (char) c
 ** @return (char) c
 **/
char my_charlowcase(char c);

/**
 ** Get the length of a string
 ** @param (char const) str
 ** @return (int) - The length of the string
 **/
int my_strlen(char const *str);

/**
 ** Display a content of a string into console
 ** @param (const char) *str
 ** @return (void)
 **/
void my_putstr(const char *str);

/**
 ** Get the number of ONLY letters into string
 ** @param (char const) *str
 ** @return (int) - The number of letters into the string
 **/
int my_strlen_without_trim(char const *str);

/**
 ** Get the absolute value of number
 ** @param (int) n
 ** @return (int) - Absolute value
 **/
int my_abs(int n);

/**
 ** Get the digital count
 ** @param (int) n
 ** @return (int) - Return the digits number
 **/
int my_digit_count(int n);

/**
 ** Math power function(10, n)
 ** @param (int) n
 ** @return (int) - Return pow(10, n)
 **/
int my_power10(int n);

/**
 ** Put the number into the console
 ** @param (int) n
 ** @return (void)
 **/
void my_put_nbr(int n);

/**
 ** Get and print the language estimated (WIP)
 ** @param (float) freq
 ** @param (struct language) *lang
 ** @return (void)
 **/
void get_language(float freq, Lang *lang);

/**
 ** Configure the language percentage
 ** @param (struct language) *lang
 ** @return (struct language) - Strcture
 **/
struct language *configure_lang(Lang *lang);

/**
 ** Display the result into the console
 ** @param (char) carac
 ** @param (int) size
 ** @param (float) freq
 ** @return (void)
 **/
void display_result(char carac, int size, float freq);

/**
 ** Rush main function
 ** @param (int) ac
 ** @param (char) **av
 ** @return (int) - Exit code
 **/
int rush2(int ac, char **av);

int main(int ac, char **av);
