#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that calculate the sum of variable arguments
 * @n: The number of argumens
 * @...: variable number of arguments
 * Return: THe sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int y = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (; y < n; y++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
