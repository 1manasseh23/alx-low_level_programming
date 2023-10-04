#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory
 * @str: An input string
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int length = 0;
	char *dup;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	dup = malloc((length + 1) * sizeof(char));


	if (dup == NULL)
	{
		return (NULL);
	}

	for (; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
