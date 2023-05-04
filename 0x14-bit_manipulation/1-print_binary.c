#include "main.h"

/**
 * print_binary - Print Binary of a Number
 * @n: n
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;

	m = 1UL << (sizeof(unsigned long int) * 8 - 1);

	int bit;

	while (m)
	{
		bit = (n & m) ? 1 : 0;
		_putchar(bit + '0');
		m >>= 1;
	}
}
