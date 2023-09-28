#include "main.h"
#include <stdio.h>
int prime_integer(int n, int x);

/**
 * is_prime_number - A function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: An input integer
 *
 * Return: 1 if n or 0
 */

int is_prime_number(int n)
{
	return (prime_integer(n, 2));
}

/**
 * prime_integer - Returns the prime integer
 * @x: An input integer
 * @n: An input integer
 *
 * Return: returns 1 if the input integer is prime number or not
 */

int prime_integer(int n, int x)
{
	if (n < 2)
	{
		return (0);
	}
	else if (x == n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (prime_integer(n, x + 1));
	}
}
