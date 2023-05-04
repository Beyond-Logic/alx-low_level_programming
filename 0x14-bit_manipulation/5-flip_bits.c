#include "main.h"

/**
  * flip_bits - flip bits
  * @n: n
  * @m: m
  * Return: Return
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int value = 0;

	unsigned long int xor = n ^ m;

	while (xor & 1)
	{
		if (xor & 1)
		{
			value++;
		}

		xor >> 1;

	}

	return (value);
}
