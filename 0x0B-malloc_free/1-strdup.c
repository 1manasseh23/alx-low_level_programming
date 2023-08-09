#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A functionthat return a ointet to a newly allocated
 * space in memory which contains a copy of the string given as a
 * paramiter.
 * @str: An input pointer of  the string to copy.
 * Return: Apointer to new stringor NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
	{
		return (NULL);
	}
}
