#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int width of the grid, init to zero
 * @height: int height of the grid, init to zero
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)

{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
{
	grid[a] = malloc(width * sizeof(int));
	if (grid[a] == NULL)
{
	for (b = 0; b < a; b++)
	free(grid[b]);
	free(grid);
	return (NULL);
}

	for (b = 0; b < width; b++)
	grid[a][b] = 0;
}

	return (grid);
}
