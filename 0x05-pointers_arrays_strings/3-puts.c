#include "main.h"
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
#include <stdio.h>

void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}

