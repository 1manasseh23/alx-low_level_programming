#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: An input integer
 * @max: Max number
 * Return: pointer to the newly created array
 */


int *array_range(int min, int max)
{
	int arr_count, *array, j = 0;

	if (min > max)
		return (NULL);

	arr_count = max - min + 1;

	array = malloc(arr_count * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (; j < arr_count; j++)
		array[j] = min + j;

	return (array);
}
