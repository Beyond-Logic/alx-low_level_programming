#include "main.h"

/**
 * binary_to_uint - Binary to Unsigned Int
 * @b: b
 * Return: Return
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		value = value << 1;

		if (*b == '1')
		{
			value = value | 1;
		}
		b++;
	}

	return (value);
}
