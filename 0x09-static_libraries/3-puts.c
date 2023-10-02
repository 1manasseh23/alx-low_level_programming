#include "main.h"
/**
 * _puts - Write a function that print a string
 * @str: an input string
 * Return: Nothing
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
