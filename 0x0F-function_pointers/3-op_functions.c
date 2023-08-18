#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - a function that returns the sum of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to sum a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that return the subtract a and b.
 * @a: an inpit integer
 * @b: an input integer
 * Return: The result to sub a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that return multiply a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to mul a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that return division of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to div a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function that return division by a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result div by a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
