#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return:0
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
