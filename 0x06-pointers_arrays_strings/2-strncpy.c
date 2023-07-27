#include "main.h"
/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: aninput integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, d = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
	{
		n = srclen;
	}
	src = start;

	for (; d < n; d++)
	{
		*dest++ = *src++;
	}
	return (temp);
}
