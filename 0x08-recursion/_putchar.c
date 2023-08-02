#include <unistd.h>
/**
 * _puchar - writes charaterc to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
