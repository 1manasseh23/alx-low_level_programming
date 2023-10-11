#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: an array cuntainer
 * @size: The size of the array
 * @cmp: A pointer to a function
 * Return: the index of the first element for which the cmp
 * function does not return 0
 * if size <= 0, return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (x < size)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
			x++;
		}
	}
	return (-1);
}
