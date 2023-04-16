#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc_grid
 * @width: width
 * @height: height
 * Return: Return
 */

int **alloc_grid(int width, int height)
{
	int *ptr1, *ptr2, w, h, **grid[2][3];

	w = 0;

	h = 0;

	ptr1 = malloc(sizeof(width));

	ptr2 = malloc(sizeof(height));

	if (ptr1 == NULL)
	{
		return (0);
	}

	if (ptr2 == NULL)
	{
		return (0);
	}

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	while (h < height)
	{
		while (w < width)
		{
			printf("%d", grid[h][w]);
			w++;
		}

		printf("\n");
		h++;
	}
}
