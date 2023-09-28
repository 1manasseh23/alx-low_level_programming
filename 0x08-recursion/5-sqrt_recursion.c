#include "main.h"
#include <stdio.h>

int sqrt_root(int n, int x);

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: Input number
 *
 * Return: N if it has one, or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (sqrt_root(n, 1));
}

/**
 * sqrt_root - A function that find square root
 * @n: An input number
 * @x: An input number
 *
 * Return: Square root of n
 */

int sqrt_root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x > n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_root(n, x + 1));
	}
}
