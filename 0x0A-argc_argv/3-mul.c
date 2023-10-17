#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments passed
 * @argv: array of strings (arguments)
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
