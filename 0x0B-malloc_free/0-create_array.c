#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of char array
 * @c: char to intialize the array
 *
 * Return: address to array
 */
char *create_array(unsigned int size, char c)
{
	char *prt;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	prt = (char *)malloc(sizeof(char) * size);

	if (prt == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		prt[i] = c;
	}
	

	return (prt);
}
