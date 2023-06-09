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
	int *ptr1, *ptr2, w, h, width;

	w = 0;

	h = 0;

	width = 0;

	ptr1 = malloc(sizeof(grid));

	ptr2 = malloc(sizeof(height));

	while (h < height)
	{
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}

		free(ptr1);
		free(ptr2);
		h++;
	}
}
