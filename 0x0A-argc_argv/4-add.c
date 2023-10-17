#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments passed
 * @argv: array of strings (arguments)
 *
 * Return: 1 if a non-integer is passed in arguments 0 otherwise
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*(argv[i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}


