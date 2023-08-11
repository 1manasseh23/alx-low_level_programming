#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: An input where the value of integers include from.
 * @max: An input where the value of integers include to.
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *new_array;
	int qrs, i;

	if (min > max)
		return (NULL);

	qrs = max - min;
	new_array = malloc((qrs + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= qrs; i++)
		new_array[i] = min++;

	return (new_array);
}
