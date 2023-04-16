#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - str concat
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: Return
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *ptr1, *ptr2;

	ptr1 = malloc(sizeof(s1));
	ptr2 = malloc(sizeof(s2));

	if (n >= s2)
	{
		return (s2);
	}

	return (ptr1);
}
