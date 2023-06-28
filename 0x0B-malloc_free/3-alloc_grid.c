#include "main.h"

/**
 * alloc_grid - loop to make grid
 * @width: function parameter
 * @height: function parameter
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);

		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)

			free(grid[a]);


		free(grid);

		return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
