#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: an input string to capitalize a letter
 * Return: pointers to s
 */
char *cap_string(char *s)
{
	int a;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ' ';

	for (a = 1; s[a] != '\0'; a++)
	{
		if ((s[a - 1] == ' ' || s[a - 1] == '\n' || s[a - 1] == '\t'
		     || s[a - 1] == ',' || s[a - 1] == ';' || s[a - 1] == '!'
		     || s[a - 1] == '?' || s[a - 1] == '"' || s[a - 1] == '('
		     || s[a - 1] == ')' || s[a - 1] == '{' || s[a - 1] == '}'
		     || s[a - 1] == '.') && (s[a] > 'a' && s[a] < 'z'))
		{
			s[a] = s[a] - ' ';
		}
	}
	return (s);
}
