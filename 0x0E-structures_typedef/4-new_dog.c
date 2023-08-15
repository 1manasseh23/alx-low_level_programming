#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer  to newly create dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len_name = 0, len_owner = 0, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;

	while (owner[len_owner])
		len_owner++;


	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (name == NULL)
		return (NULL);
	for (j = 0; name[j]; j++)
		cpyname[j] = name[j];
	cpyname[j] = '\0';

	cpyowner = malloc(len_owner + 1);
	if (owner == NULL)
		return (NULL);
	for (j = 0; owner[j]; j++)
		cpyowner[j] = owner[j];
	cpyowner[j] = '\0';


	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
