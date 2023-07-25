#include "main.h"

/**
 * puts_half - a function that print half or string
 * @str: An input string
 * Return: 0 (success)
 */

void puts_half(char *str)
{
	int bim = 0, n, s;

	while (str[bim] != '\0')
	{
		bim++;
	}
	if (bim % 2 == 0)
	{
		n = bim / 2;
	}
	else
	{
		n = (bim + 1) / 2;
	}
	for (s = n; s < bim; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
