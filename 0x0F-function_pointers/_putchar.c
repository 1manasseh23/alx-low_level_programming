#include <unistd.h>

/**
 * _putchar - Write the charater c to stdout
 * @c: The character to print
 *
 * Return: On succces 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
