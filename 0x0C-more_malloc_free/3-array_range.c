#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: Return
 */

int *array_range(int min, int max)
{
	int *ptr1, *ptr2;

	ptr1 = malloc(sizeof(min));

	ptr2 = malloc(sizeof(max));

	if (min > max)
	{
		return (NULL);
	}

	return (ptr1);
}
