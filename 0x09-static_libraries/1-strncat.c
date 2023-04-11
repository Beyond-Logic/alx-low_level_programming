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

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
