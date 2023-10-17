#include "main.h"
#include <stdio.h>
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
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}

	}

	return (0);
}
