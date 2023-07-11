#include "main.h"

/**
 * alloc_grid - return a pointer to a 2D array of int
 * @width: column of array
 * @height: raw of array
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
				return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
