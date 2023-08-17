#include <unistd>

/**
 * _putchar - write the character c to stdout
 * @c: The character to printf
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (writ(1, &c, 1));
}
