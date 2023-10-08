#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: char array 1
 * @s2: char array 2
 *
 * Return: NULL if memory failed otherwise contatenated string
*/

char *str_concat(char *s1, char *s2)
{
	size_t len_s1;
	size_t len_s2;
	size_t comb_len;
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	comb_len = len_s1 + len_s2;

	ptr = (char *)malloc(sizeof(char) * (comb_len + 1));

	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < len_s2; i++)
	{
		ptr[len_s1 + i] = s2[i]; 
	}

	ptr[comb_len] = '\0';

	return (ptr);
}

