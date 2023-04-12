#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2 dimensional grid created by alloc_grid
 * @grid: subject grid
 * @height: height of subject grid
 *
 * Return: nothing to return
 */

void free_grid(int **grid, int height)

{
	int a;

	for (a = 0; a < height; a++)
{
	free(grid[a]);
}
	free(grid);
}
