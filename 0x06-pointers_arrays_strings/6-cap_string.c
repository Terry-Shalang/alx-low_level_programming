#include <stdio.h>
#include <ctype.h>

/**
 * *cap_string - capitalizes all words in a string
 * based on specified separators.
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (capitalize && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
	}

	return (str);
}
