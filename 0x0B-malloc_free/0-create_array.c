#include "main.h"
#include <stdlib.h>

/**
 * create_array - A funvtion that creates an array of chars,
 * and initializes it with a specific char
 * @size: The size of array
 * @c: Character to initialized
 *
 * Return: Pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);


	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (;i < size; i++)
		array[i] = c;

	return (array);
}
