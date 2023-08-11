#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocate memory for an array unsig malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: return pointer to allocate space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
