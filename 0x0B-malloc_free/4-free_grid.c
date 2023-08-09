#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A that free a 2D array of ints previously
 * created by malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
