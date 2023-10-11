#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array
 * @array: An array of integers
 * @size: The size ot the array
 * @action: Pointer to function
 * Return: Pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	if (array != NULL && action != NULL)
	{
		for (y = 0; y < size; y++)
		{
			action(array[y]);
		}
	}
}
