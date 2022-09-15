#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Return: always returns 0 for success
 *
 */

void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph ++;
	}
	_putchar(10);
}
