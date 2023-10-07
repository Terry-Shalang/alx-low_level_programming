#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size: size of char array
 * @c: char to intialize the array
 */
char *create_array(unsigned int size, char c)
{
    char * prt;
    
    if (size == 0)
    {
        return NULL;
    }

    prt = (char *)malloc(sizeof(char) * size);

    *prt = c;

    return prt;
}
