#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs
 * @d: The dog to free
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
