#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: number of memory space
 * @size: size os memory space
 * Return: Pointer to memory or NULL at failure
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *num;
	unsigned int amount_z;


	if (nmemb == 0 || size == 0)
		return (NULL);

	amount_z = nmemb * size;

	num = malloc(amount_z);

	if (num == NULL)
		return (NULL);

	memset(num, 0, amount_z);


	return (num);
}
