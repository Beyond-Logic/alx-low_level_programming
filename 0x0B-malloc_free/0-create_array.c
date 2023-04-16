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

	ptr = malloc(c * sizeof(int));

	if (ptr == NULL)
	{
		return (0);
	}

	printf("\n");
}
