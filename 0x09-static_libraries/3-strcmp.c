#include "main.h"

/**
 * _strcmp - string compare
 * @s1: dest
 * @s2: src
 * Return: return
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}

	s2[i] = '\0';

	return (i);
}
