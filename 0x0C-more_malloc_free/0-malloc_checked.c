#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Malloc Checked
 * @b: b
 * Return: Return
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		return (ptr);
	}
}
