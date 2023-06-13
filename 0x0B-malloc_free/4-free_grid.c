#include "main.h"

/**
 * free_grid - frees 2 dimensional grid
 * @grid: two dimensional grid
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
