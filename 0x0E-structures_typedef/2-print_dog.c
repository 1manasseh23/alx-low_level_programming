#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A function that prints structure dog
 *
 * @d: structure to initialize
 * Return: 0 (success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";


	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
