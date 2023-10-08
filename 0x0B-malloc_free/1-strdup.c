#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: char array
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(ptr + i) = str[i];
	}

	ptr[len] = '\0';

	return (ptr);
}
