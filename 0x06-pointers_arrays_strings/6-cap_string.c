#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: an input string to capitalize a letter
 * Return: pointers to s
 */
char *cap_string(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (j == 0 && (s[j] >= 'a' && s[j] <= 'z'))
		{
			s[j] -= 32;
		}
		if (check_seperators(s[j]) && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
		{
			s[j + 1] -= 32;
		}
		j++;
	}
	return (s);
}
/**
 * check_seperators - separators of word: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int a = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; a < 13; a++)
	{
		if (c == seperators[a])
			return (1);
	}
	return (0);
}
