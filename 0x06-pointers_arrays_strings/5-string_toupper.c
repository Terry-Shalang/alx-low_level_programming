#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string of characters
 *
 * Return: Pointer to str with upper cases
 */
char *string_toupper(char *str)
{
	int len_str = strlen(str);

	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < len_str; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == lower[j])
			{
				str[i] = upper[j];
				break;
			}
		}
	}

	return (str);
}
