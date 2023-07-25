#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char rev[len + 1];
	int i = len;

	for (; i >= 0; i--)
	{
		rev[len - i] = s[i - 1];
	}

	rev[len] = '\0';

	int j = 0;

	for (; j <= len; j++)
	{
		s[j] = rev[j];
	}
}
