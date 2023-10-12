#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A funtion that prints the numbers in separated
 * by a specified separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers
 * @...: The integers to print
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int x = 0;

	va_start(args, n);

	while (x < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		x++;

		if (x < n - 1 && separator)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
