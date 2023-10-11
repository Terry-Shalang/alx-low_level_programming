#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints a name.
 * @array: array to be actioned on
 * @size: size of the array
 * @cmp: Pointer to action function
 *
 * Return: The index of the first element for which the cmp
 * function does not return 0.If no element matches, return -1
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
	{
		int i = 0;
		
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
	else
	{
		return (-1);
	}

}
