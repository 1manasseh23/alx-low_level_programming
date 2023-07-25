#include "main.h"

/**
 * puts2 - This print character of a string, starting with the first character
 * @str: an input string
 * Return: 0 (success)
 */

void puts2(char *str)
{
	int ber = 0, d = 0;

	while (str[ber] != '\0')
	{
		ber++;
	}
	ber -= 1;

	for (; d <= ber; d += 2)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
