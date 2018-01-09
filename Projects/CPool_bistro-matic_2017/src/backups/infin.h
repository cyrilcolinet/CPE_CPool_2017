int	char_to_int(char c);

int	int_to_char(int c);

/**
 ** Calcul an expotentiel of any number
 ** @param (int) i
 ** @param (int) n
 ** @return (int) result of the expotentiel
 **/
int 	exposant(int i, int n);

/**
 ** calcul the value of the retenu for the multiplication 
 ** @param (int) result
 ** @return (int) value of retenu from result
 **/
int	deter_retenu(int result);

/**
 ** reverse all the string of characters 
 ** @param (char *) str
 ** @return (char *) the str reverse
 **/
char    *my_evil_str(char *str);

/**
 ** Here is the general calcul 
 ** @param (char *) num1
 ** @param (char *) num2
 ** @param (int) pos1
 ** @param (int) pos2
 ** @return (char *) resultat with addition to do thanks to add_infin
 **/
char	*my_multi_calcul(char *num1, char *num2, int pos1, int pos2);


/**
 ** Do the calcul and  write the result in a table 
 ** @param (char *) num1
 ** @param (char *) num2
 ** @param (int) pos1
 ** @param (int) pos2
 ** @return (char *) resultat clear without addition to do
 **/
char	*calcul_spe_summation(char *num1, char *num2, int pos1, int pos2);

/**
 ** First : check if the multiplication is simple
 ** Second  : swap to have the small number like base for calculate
 ** @param (char *) num1
 ** @param (char *) num2
 ** @return (char) *result with addition form
 **/
char	*calcul_summation(char *num1, char *num2);

char	*my_summation(char *num1, char *num2);
