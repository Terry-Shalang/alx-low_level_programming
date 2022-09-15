#include "main.h"



/**
 *
 *   * print_last_digit - is a function that checks if character alphabet
 *
 *   *
 *
 *   * @num: takes in int num and checks
 *
 * 
 *
 *   * Return: Always return 0 on success
 *
 */

int print_last_digit(int num)

{

		int res;



			res = num % 10;

				if (num < 0)

							res *= -1;

					_putchar(res + '0');

						return (res);

}
