#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints a name.
 * @array: array to be actioned on
 * @size: size of the array
 * @action: Pointer to action function
 *
 * Return: void(nothing)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
		unsigned int i;

		if (array && action)
				for (i = 0; i < size; i++)
						action(array[i]);
}
