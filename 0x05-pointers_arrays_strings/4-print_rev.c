#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @str: string to print in reverse
 */
void print_rev(char *str)
{
	int i = strlen(str);

	for (; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
