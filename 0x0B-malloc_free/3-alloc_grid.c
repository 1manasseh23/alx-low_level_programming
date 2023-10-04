#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2
 * dimensional array of integers
 * @width: An input integer
 * @height: An input integer
 *
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **gd;
	int i = 0, x = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	gd = (int **)malloc(height * sizeof(int *));

	if (gd == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		gd[i] = malloc(width * sizeof(int));

		if (gd[i] == NULL)
		{
			for (; x < i; x++)
			{
				free(gd[x]);
			}
			free(gd);
			return (NULL);
		}
		for (; x < width; x++)
		{
			gd[i][x] = 0;
		}
	}
	return (gd);
}
