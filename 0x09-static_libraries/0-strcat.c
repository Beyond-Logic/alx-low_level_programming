#include "main.h"

/**
 * *_strcat - concat
 * @dest: dest
 * @src: src
 * Return: return the dest
 */

char *_strcat(char *dest, char *src)
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
