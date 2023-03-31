#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * leet - leet
 * @c: c
 * Return: return
 */

char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = toupper(c[i]);
	}

	return (c);
}
