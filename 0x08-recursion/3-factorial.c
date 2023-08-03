#include "main.h"
/**
 * factorial - a function that return the factorial of a number.
 * @n: An inbput integer
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
