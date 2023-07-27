#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer < 0 if s1 < s2, 0 if s1 = s2
 * and integer > 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = strlen(s1);

	int i = 0;

	int result;

	for (; i < len_s1; i++)
	{
		if (s1[i] == s2[i])
		{
			result = 0;
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = -15;
			break;
		}
		else
		{
			result = 15;
			break;
		}
	}
	return (result);
}
