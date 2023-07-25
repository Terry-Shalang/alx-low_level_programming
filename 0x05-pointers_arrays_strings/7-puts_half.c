#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: Input string
 */
void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 != 0)
	{
		int len_odd = (len - 1) / 2;

		for (; len_odd < len; len_odd++)
		{
			_putchar(str[len_odd]);
		}
	}
	else
	{
		int len_even = (len) / 2;

		for (; len_even < len; len_even++)
		{
			_putchar(str[len_even]);
		}
	}
	_putchar('\n');
}
