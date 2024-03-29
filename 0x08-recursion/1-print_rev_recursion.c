#include <stdio.h>
#include "main.h"

/**
 *_print_rev_recursion- function that prints a string in reverse,
 *followed by a new line
 *@s: string to print
 *
 * Return: None
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    else
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}
