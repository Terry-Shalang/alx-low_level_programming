#include <stdio.h>

/**
 *   * main -Entry point of the program
 *
 *   * function takes no arguments
 *
 *   * Return: Program returns 0 for success
 *
 */

int main(void)
/*Description : program uses size() to output the size of data types*/
{
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
