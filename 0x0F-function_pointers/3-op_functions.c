#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function that adds to integers
 * @a: int a
 * @b: int b
 *
 * Return:  returns the sum of a and b
*/
int op_add(int a, int b) {return (a + b); }

/**
 * op_sub - function that subtracts two integers
 * @a: int a
 * @b: int b
 *
 * Return:  returns the difference of a and b
*/
int op_sub(int a, int b) {return (a - b);}

/**
 * op_mul - function that multiplies two integers
 * @a: int a
 * @b: int b
 *
 * Return:  returns the product of a and b
*/
int op_mul(int a, int b) {return (a * b);}

/**
 * op_div - function that divides two integers
 * @a: int a
 * @b: int b
 *
 * Return:  returns the  quotient of a and b
*/
int op_div(int a, int b) {return (a / b);}

/**
 * op_mod - function that finds the modulus
 * @a: int a
 * @b: int b
 *
 * Return:  returns the remainder of the division of a by b
*/
int op_mod(int a, int b) {return (a % b);}