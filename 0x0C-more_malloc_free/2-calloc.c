#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: nmemb
 * @size: size
 * Return: Return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = malloc(sizeof(nmemb));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	return (ptr)
}
