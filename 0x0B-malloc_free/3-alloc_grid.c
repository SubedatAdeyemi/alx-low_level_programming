#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the allocated grid, or
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int j, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		a[j] = malloc(sizeof(int) * width);

		if (a[j] == NULL)
		{
			for (--j; j >= 0; --j)
				free(a[j]);
			free(a);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (l = 0; l < width; l++)
		{
			a[j][l] = 0;
		}
	}

	return (a);
}
