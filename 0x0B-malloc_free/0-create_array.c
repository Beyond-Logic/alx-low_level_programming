#include "main.h"
#include "stdlib.h"

/**
 * create_array - Create Array
 * @size: size
 * @c: c
 * Return: Return
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	int *ptr;

	ptr = (*int) malloc(c * sizeof(int));

	if (ptr == NULL)
	{
		return (0);
	}

	i = 0;

	while (i < size)
	{
		if (i % 10)
		{
			printf("");
		}

		if (!(i % 10) && i)
		{
			printf("\n");
		}

		printf(c[i]);
	}
}
