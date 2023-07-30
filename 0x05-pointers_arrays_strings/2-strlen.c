#include "main.h"
/**
 * _strlen - a function tha return then length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
