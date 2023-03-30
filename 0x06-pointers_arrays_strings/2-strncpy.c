#include "main.h"

/**
 * _strncpy - string copy
 * @dest: dest
 * @src: src
 * @n: n
 * Return: return the dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		i++;
	}

	dest[n] = '\0';

	return (dest);
}
