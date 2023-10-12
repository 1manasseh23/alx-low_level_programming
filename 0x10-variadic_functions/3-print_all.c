#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A function  that prints anythin
 * @format: A list of argument
 * @...: Variable number of argument
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list args;

	unsigned int x = 0;

	char *separator = "";

	char *str;

	va_start(args, format);

	while (format && format[x])
	{
		if (format[x] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[x] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[x] == 'f')
		{
			printf("%s%f", separator, (float)va_arg(args, double));
		}
		else if (format[x] == 's')
		{
			str = va_arg(args, char *);

			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		separator = ", ";
		x++;
	}
	va_end(args);

	printf("\n");
}
