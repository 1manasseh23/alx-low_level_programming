#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *  @dest: an input string
 *  @src: an input string
 *  @n: an input integer
 *  Return: A point to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, q = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}
	if (n > srclen)
	{
		n = srclen;
	}
	src = start;


	for (; q < n; q++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
