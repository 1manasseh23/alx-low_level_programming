#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that  frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: An input integer to free
 * @height: Height grid
 * REturn: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	for (; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
