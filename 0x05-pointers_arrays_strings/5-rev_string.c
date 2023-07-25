#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a givingstring
 *
 *
 * @s: string to check length of
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}
/**
  * rev_string - reverses string in place, without printing it
  *
  * @s: string to revers
  * Return: void
  */

void rev_string(char *s)
{
	int len, e;
	char x, z;

	len = _strlen(s) - 1;
	e = 0;
	while (e < len)
	{
		x = s[e];
		z = s[len];
		s[e++] = z;
		s[len--] = x;
	}
}
