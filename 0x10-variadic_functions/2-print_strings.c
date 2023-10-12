#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function hat prints strings, followed by a new line
 * @separator: The separator between the string to print
 * @n: The number of string
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int x = 0;

	char *str;

	va_start(args, n);

	for (; x < n; x++)
	{
		str = va_arg(args, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (x < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
