#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory previously allocated for a 2D grid
 * @grid: Pointer to the 2D grid to be freed
 * @height: The number of rows in the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
