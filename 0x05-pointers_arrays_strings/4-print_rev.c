#include "main.h"

/**
 * print_rev - a a function that print a string i revers.
 * @s: an input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int mer = 0;

	while (s[mer] != '\0')
	{
		mer++;
	}
	while (mer)
	{
		_putchar(s[--mer]);
	}
	_putchar('\n');
}
