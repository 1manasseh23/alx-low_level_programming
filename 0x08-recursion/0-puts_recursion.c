#include "main.h"
#include <stdio.h>


/**
 * _puts_recursion - A function that print a string,followed by a new line
 * @s: An input string to printing
 *
 * Return: 0 success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
		putchar(*s);
                _puts_recursion(s + 1);
}
