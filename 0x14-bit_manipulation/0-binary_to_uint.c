#include "main.h"

/**
 * binary_to_uint - Binary to Unsigned Int
 * @b: b
 * Return: Return
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
	{
		return (NULL);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		value = value * 2 + (*b - '0');
	}

	return (value);
}
