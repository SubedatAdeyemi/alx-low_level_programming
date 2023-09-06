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
	int i, j, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (--j; j >= 0; --j)
			{
				free(a[i]);
			free(a);
			return (NULL);
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
		{
			a[i][l] = 0;
		}
	}

	return (a);
}
