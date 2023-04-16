#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free_grid
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int *ptr1, *ptr2, w, h;

	w = 0;

	h = 0;

	ptr1 = malloc(sizeof(grid));

	ptr2 = malloc(sizeof(height));

	if (ptr1 == NULL)
	{
		return (0);
	}

	if (ptr2 == NULL)
	{
		return (0);
	}

	while (h < height)
	{
		while (w < width)
		{
			prinf("%d ", grid[h][w]);
			w++;
		}

		free(ptr1[w]);
		free(ptr2[h])
		h++;
	}

	return (0);
}
