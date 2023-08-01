#include "main.h"
#include "stddef.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to seach in
 * @needle: an input string to locate into string haystack
 * Return: a pointer to ton the begining of the located substring,
 * or NULL if the subbstring is not foun.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		start = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = starth + 1;
	}
	return (NULL);
}
