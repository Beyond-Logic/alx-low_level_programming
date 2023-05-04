#include "main.h"

/**
  * clear_bit - Clear Bit
  * @n: n
  * @index: index
  * Return: Return
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	m = m << index;
	m = ~m;

	*n = *n & m;

	return (1);
}
