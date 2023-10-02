#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte ('\n'),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to to surce string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';
	return (dest);
}
