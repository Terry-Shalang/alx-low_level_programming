#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		for (; letter <= 'z'; letter++)
		{
			printf("%c", letter);
		}
		printf("\n");
		i++;
	}
}

