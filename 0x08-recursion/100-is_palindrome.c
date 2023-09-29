#include "main.h"
#include <stdio.h>
#include <string.h>


int is_palindrome_recur(char *s, int first, int last);
/**
 * is_palindrome_recur - A function to obtain the length of the string
 * @first: An input string
 * @last: An input string
 * @s: A string to calculate length
 *
 * Return: A revers string
 */


int is_palindrome_recur(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1);
	}
	if (s[first] == s[last])
	{
		return (is_palindrome_recur(s, first + 1, last - 1));
	}


	return (0);
}


/**
 * is_palindrome - A function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: An input string
 *
 * Return: Length of string
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recur(s, 0, len - 1));
}
