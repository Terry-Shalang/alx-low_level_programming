#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string given as a parameter
 * @str - char array
 * 
 * Return - pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	unsigned int len = sizeof(str);

	ptr = (char *)malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		*(ptr + i) = str[i];
	}

	return (ptr);
}