#include "main.h"

/**
 * _strspn - a function that gets the lenth of a prefix substring.
 * @s: an input  string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int eas = 0, flag;
	char *sweet = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				eas++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = sweet;
		if (flag == 0)
			break;
	}
	return (eas);
}
