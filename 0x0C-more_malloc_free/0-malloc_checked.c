#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: Character to check
 *
 * Return: Pointer
 * an error or terminate the process with staus 98
 */


void *malloc_checked(unsigned int b)
{
	void *alocate;

	alocate = malloc(b);

	if (alocate != NULL)
		return (alocate);
	else
	exit(98);
}
