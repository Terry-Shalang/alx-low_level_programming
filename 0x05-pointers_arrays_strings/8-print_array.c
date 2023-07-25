#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line.
 * @a: Array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (n - i ==  1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
