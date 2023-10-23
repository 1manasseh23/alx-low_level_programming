#include <unist.h>

/**
 * _putchar - A function that print a character c to stdout
 * @c: the character to print
 * Return: Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	_putchar(write(1, &c, 1));
}
