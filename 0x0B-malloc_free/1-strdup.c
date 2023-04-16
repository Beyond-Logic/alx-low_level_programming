#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Strdup
 * @str: str
 * Return: Return
 */

char *_strdup(char *str)
{
	int *ptr;

	ptr = malloc(str * sizeof(int));

	if (ptr == NULL)
	{
		return (0);
	}

	return (ptr);
}
