#include <stdio.h>

#include <stdlib.h>



/**
 * *   * main- Entry point of the program
 *
 *     * No arguments
 *
 *      *
 *
 *      * Description: prints a-z and A-Z using a for loop
 *
 *      * Return: program always return 0(success)
 *
 **/

int main(void)

{

char charLow;

char charUpper;



for (charLow = 'a'; charLow <= 'z'; charLow++)

{

putchar(charLow);

}

for (charUpper = 'A'; charUpper <= 'Z'; charUpper++)

{

putchar(charUpper);

}

putchar('\n');

return (0);

}
