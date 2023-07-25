#include "main.h"
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;

	for (; i < strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
