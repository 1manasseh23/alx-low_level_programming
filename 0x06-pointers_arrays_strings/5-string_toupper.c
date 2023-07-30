#include "main.h"
/**
 * string_toupper - a function that change all  lowercase strings
 * to uper case
 * @s: an input string
 * Return: char pointer to coverted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (start);
}
