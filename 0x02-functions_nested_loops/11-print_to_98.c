#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	for (; n < 99; n++)
		{
			printf("%d, ", n);
		}
}
