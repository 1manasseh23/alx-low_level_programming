#include "main.h"
/**
 * leet - aa function that encode a string into 1337.
 * @s: an input string to encode
 * Return: An encodestring
 */
char *leet(char *s)
{
	int c = 0, p;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[c])
	{
		for (p = 0; p < 10; p++)
		{
			if (s[c] == str[p])
			{
				s[c] = subs[p];
			}
		}
		c++;
	}
	return (s);
}
