#include "main.h"
#include <stdio.h>

int inocmp(char *s1, char *s2);

/**
 * natch - A function that checks both string
 * are empty, considered identical
 * @s1: An input string
 * @s2: An input string
 *
 * return: Identical string
 */

int natch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (inocmp(s1, s2));
	}
	return (0);
}


/**
 * inocmp - A function to chek for empty string
 * @s1: An input string
 * @s2: An input string
 *
 * Return: String
 */

int inocmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	if (*s2 == '*')
	{
		return (natch(s1, s2 + 1) || natch(s1 + 1, s2));
	}
	return (natch(s1, s2));
}

/**
 * wildcmp - A function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 * @s1: An input string
 * @s2: An input string
 *
 * Return: 1 if the string is identical
 */


int wildcmp(char *s1, char *s2)
{
	return (inocmp(s1, s2));
}
