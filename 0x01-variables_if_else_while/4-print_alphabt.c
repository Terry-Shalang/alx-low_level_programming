#include <stdio.h>
#include <stdlib.h>



/**
 *
 *   * main - Entry point of the program
 *
 *   * No arguments.
 *
 *   *
 *
 *   * Description: prints lowercase letters expt q and e
 *
 *   * Return: program always return 0(success)
 *
 **/

int main(void)

{

char charLower;



for (charLower = 'a'; charLower <= 'z'; charLower++)

{

if (charLower == 'q')

continue;

else if (charLower == 'e')

continue;

putchar(charLower);

}

putchar('\n');

return (0);

}
