#include "main.h"
/**
 * _puts_recursion - a function that prints a string, following by a new line.
 * @s:An input string to printing
 * Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
