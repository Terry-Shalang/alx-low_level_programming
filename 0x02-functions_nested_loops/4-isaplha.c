#inlcude "main.h"

/**
 * isalpha: checks alphabetic characters
 *
 * @alph: takes in int alph
 *
 * Returns: 1 if @alpha is a letter otherwise 0
 */

int _isalpha(int alph)
{
	if((alph >= 97) && (alph <=122))
		return (1);
	else if((alph >= 65) && (alph <= 90))
		return (1);
	else
		return (0);
}
