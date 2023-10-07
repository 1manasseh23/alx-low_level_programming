#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: Character to check
 *
 * Return: Pointer
 * an error or terminate the process with staus 98
 */


void *malloc_checked(unsigned int b)
{
	void *alt;

	alt = malloc(b);

	if (alt == NULL)
	{
		exit(98);
	}
	return (alt);
}
