#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - str concat
 * @s1: s1
 * @s2: s2
 * Return: Return
 */

char *str_concat(char *s1, char *s2)
{
	int *ptr1, *ptr2;

	ptr1 = malloc(sizeof(*s1));
	ptr2 = malloc(sizeof(*s2));

	if (ptr1 == NULL)
	{
		return (0);
	}

	if (ptr2 == NULL)
	{
		return (0);
	}

	if (*s1 == NULL || *s2 == NULL)
	{
		printf(" ");
	}

	return (s1);
}
