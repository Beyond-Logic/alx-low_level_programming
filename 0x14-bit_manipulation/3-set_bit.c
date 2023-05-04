#include "main.h"

/**
  * set_bit - Set Bit
  * @n: n
  * @index: index
  * Return: Return
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;

	*n |= m;

	return (1);
}
