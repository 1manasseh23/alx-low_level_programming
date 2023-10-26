#include <unistd.h>

/**
 * _putchar - A function that print the character c to stdout
 * @c: The character to print
 * Return: On succces 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchr(char c)
{
	return (write(1, &c, 1));
}
