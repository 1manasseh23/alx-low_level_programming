#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: The pointer to binary
 * Return: The converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		output = output * 2 + (*b - '0');
		b++;
	}

	return (output);
}
