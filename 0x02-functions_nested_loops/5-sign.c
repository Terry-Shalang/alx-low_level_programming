#include "main.h"



/**
 *
 *   * print_sign -checks if character alphabet
 *
 *   *
 *
 *   * @num: takes in int num and checks
 *
 *   *
 *
 *   * Return: Always return 0 on success
 *
 *   *
 *
 **/

int print_sign(int num)

{

		int tmp;
		if (num > 0)
		{
			_putchar(43);	
			tmp = 1;							
		}
		else if (num == 0)
		{
			_putchar(48);
			tmp = 0;
		}
		else					
		{
			_putchar(45);
			tmp = -1;		
		}
		return (tmp);

}
