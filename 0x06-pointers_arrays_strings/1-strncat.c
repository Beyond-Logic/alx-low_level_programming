#include "main.h"

/**
 * _strncat - string concate
 * @dest: dest
 * @src: src
 * @n: n
 * Return: return the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
