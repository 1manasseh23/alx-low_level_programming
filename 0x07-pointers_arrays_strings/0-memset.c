#include "main.h"
/**
 * _memset - a function that fills memory with constand bytes
 * @s: location to file
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *sweet = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (sweet);
}
