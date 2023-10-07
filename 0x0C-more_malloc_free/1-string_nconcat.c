#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: An input string
 * @s2: An input string
 * @n: An input integer
 * Return: NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1 = 0, len_2 = 0;
	char *rstl;
	unsigned int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}

	while (s1[len_1])
		len_1++;
	while (s2[len_2])
		len_2++;

	if (n >= len_2)
		rstl = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	else
		rstl = (char *)malloc(sizeof(char) * (len_1 + n + 1));

	if (rstl == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		rstl[x] = s1[x];

	for (y = 0; y < n && s2[y]; y++)
		rstl[x + y] = s2[y];

	rstl[x + y] = '\0';

	return (rstl);
}
