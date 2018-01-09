/*
** EPITECH PROJECT, 2017
** multiplication
** File description:
** Multiplication functions
*/

#include "../include/my.h"
#include "../include/utils.h"
#include <stdlib.h>

int	char_to_int(char c)
{
	return (c - 48);
}

int	int_to_char(int c)
{
	return (c + 48);
}

/**
 ** Calcul an expotentiel of any number
 ** @param (int) i
 ** @param (int) n
 ** @return (int) result of the expotentiel
 **/
int 	exposant(int i, int n)
{
	int yum = i;
	int cnt = 1;

	if (n == 0 )
		return (1);
	while (n > cnt ) {
		yum = yum * i;
		cnt++;
	}
	return (yum);
}

/**
 ** calcul the value of the retenu for the multiplication 
 ** @param (int) result
 ** @return (int) value of retenu from result
 **/
int	deter_retenu(int result)
{
	int retenu = 0;
	int cnt = 0;

        if (result >= 10) {
		result = result / 10;
		return (result);
	}
	else
		return (0);
}

/**
 ** reverse all the string of characters 
 ** @param (char *) str
 ** @return (char *) the str reverse
 **/
char    *my_evil_str(char *str)                                                 
{                                                                               
        int     i;                                                              
        int     j = 0;                                                          
        char    c;                                                              
                                                                                
        i = my_strlen(str) - 1;                                                 
        while (i > j) {                                                         
                c = str[j];                                                     
                str[j] = str[i];                                                
                str[i] = c;                                                     
                i--;                                                            
                j++;                                                            
        }                                                                       
        return (str);                                                           
}

/**
 ** Here is the general calcul 
 ** @param (char *) num1
 ** @param (char *) num2
 ** @param (int) pos1
 ** @param (int) pos2
 ** @return (char *) resultat with addition to do thanks to add_infin
 **/
char	*my_multi_calcul(char *num1, char *num2, int pos1, int pos2)
{
	int result = 0;
	int value_ret = 0;
	char *resultat;
	int k = 0;
	int cnt = 0;
	int value_pos1;
	int value_pos2;
	int save_pos2 = pos2;
	char *new_res;
	int cnt_f;

	resultat = malloc(sizeof(char) * (pos1 * pos2));
	resultat[k] = '\0';
	while (pos1 >= 0) {
		value_pos1 = char_to_int(num1[pos1]);
	        pos2 = save_pos2;
	        while (pos2 >= 0) {
		       	value_pos2 = char_to_int(num2[pos2]);
	        	result = value_pos1 * value_pos2 + value_ret;
	        	resultat[k] = int_to_char(result % 10);
	        	value_ret = deter_retenu(result);
			pos2--;
			k++;
		}
		if (value_ret > 0) {
			resultat[k] = int_to_char(value_ret);
	        	k++;
		}
		value_ret = 0;
	        cnt++;
	        pos1--;
		cnt_f = cnt;
	        if (pos1 >= 0) {
			resultat[k] = '+';
			k++;
			while ((cnt_f) > 0) {
				resultat[k] = '0';
				k++;
				cnt_f--;
			}
		}
	}
	new_res = my_evil_str(resultat);
        return(new_res);
}

/**
 ** Do the calcul and  write the result in a table 
 ** @param (char *) num1
 ** @param (char *) num2
 ** @param (int) pos1
 ** @param (int) pos2
 ** @return (char *) resultat clear without addition to do
 **/
char	*calcul_spe_summation(char *num1, char *num2, int pos1, int pos2)
{
	char *resultat;
	int k = 0;
	int result;
	
	resultat = malloc(sizeof(char) * 3);
	result = char_to_int(num1[pos1]) * char_to_int(num2[pos2]);
	if (result < 10) {
		resultat[k] = int_to_char(result);
		resultat[k + 1] = '\0';
	}
	else {
		resultat[k] = int_to_char(result / 10);
		resultat[k + 1] = int_to_char(result % 10);
		resultat[k + 2] = '\0';
	}
	return (resultat);
}

/**
 ** First : check if the multiplication is simple
 ** Second  : swap to have the small number like base for calculate
 ** @param (char *) num1
 ** @param (char *) num2
 ** @return (char) *result with addition form
 **/
char	*calcul_summation(char *num1, char *num2)
{
	int pos1 = my_strlen(num1) - 1;
        int pos2 = my_strlen(num2) - 1;
        char *swap;
	int swapi;
	int result;
	int k = 0;
	char *resultat;

	if (pos1 == 0 && pos2 == 0)
		return(calcul_spe_summation(num1, num2, pos1, pos2));
	if (pos1 > pos2) {
		swap = num1;
		num1 = num2;
		num2 = swap;
		swapi = pos1;
		pos1 = pos2;
		pos2 = swapi;
	}
	resultat = my_multi_calcul(num1, num2, pos1, pos2);
	return (result);
}

char	*my_summation(char *num1, char *num2)
{
	int result;
	char *resultat;

	resultat = calcul_summation(num1, num2);
	//Faire l'addition infini et aprés je met le moins devant si il faut !!
	if (num1[0] = '-' || num2[0] = '-')
		resultat[k] = '-';
	return (resultat);
}
