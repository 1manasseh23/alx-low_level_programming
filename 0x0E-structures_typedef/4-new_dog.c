#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: The new dog name
 * @age: The new dog age
 * @owner: The new dog owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog_ptr;
	char *newdog_name, *newdog_owner;

	newdog_ptr = malloc(sizeof(dog_t));
	if (newdog_ptr == NULL)
		return (NULL);

	newdog_name = malloc(strlen(name) + 1);
	if (newdog_name == NULL)
	{
		free(newdog_ptr);
		return (NULL);
	}
	strcpy(newdog_name, name);

	newdog_owner = malloc(strlen(owner) + 1);
	if (newdog_owner == NULL)
	{
		free(newdog_ptr);
		free(newdog_name);
		return (NULL);
	}
	strcpy(newdog_owner, owner);

	newdog_ptr->name = newdog_name;
	newdog_ptr->age = age;
	newdog_ptr->owner = newdog_owner;

	return (newdog_ptr);
}
