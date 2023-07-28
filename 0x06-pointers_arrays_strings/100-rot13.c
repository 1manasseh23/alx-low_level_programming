#include "main.h"
/**
 * rot13 - a function that encode a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	int i;
	int n;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[i] == data1[n])
			{
				s[i] = data1[n];
				break;
			}
		}
	}
	return (s);
}
