#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: Dog structure
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
