#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input string
 * @s2: An input string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *concater;
	int i = 0;
	int x = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concater = malloc((len1 + len2 + 1) * sizeof(char));

	if (concater == NULL)
		return (NULL);

	for (; i < len1; i++)
		concater[i] = s1[i];

	for (; x < len2; x++)
		concater[len1 + x] = s2[x];

	concater[len1 + len2] = '\0';

	return (concater);
}
