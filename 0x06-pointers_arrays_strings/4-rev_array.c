#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse Array
 * @a: a
 * @n: n
 */

void reverse_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		printf("%d", a[i]);

		i++;
	}
}
