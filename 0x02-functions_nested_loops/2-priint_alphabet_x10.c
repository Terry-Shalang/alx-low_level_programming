#include "main.h"



/**
 *
 *   * print_alphabet_x10 - prints alphabets 10 times.
 *
 *   *
 *
 *   * Return: Always return 0 on success
 *
 *   *
 */

void print_alphabet_x10(void)
{
	int i;

	char alph;
     	i = 1;

	while (i <= 10)					
	{	
		for (alph = 'a'; alph <= 'z'; ch++)
		{
			_putchar(alph);
		}
		_putchar(10);
		i++;
	}

}
