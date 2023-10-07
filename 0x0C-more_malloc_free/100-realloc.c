#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A functio that reallocates a memory block using malloc and free
 * @ptr: Pointer to memory
 * @old_size: old memory space
 * @new_size: new memory space
 * Return: void pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *first_ptr;
	unsigned int gen_size;

	if (ptr == NULL)
	{
		first_ptr = malloc(new_size);

		return (first_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	first_ptr = malloc(new_size);

	if (first_ptr == NULL)
		return (NULL);

	gen_size = (old_size < new_size) ? old_size : new_size;
	memcpy(first_ptr, ptr, gen_size);


	free(ptr);

	return (first_ptr);
}
