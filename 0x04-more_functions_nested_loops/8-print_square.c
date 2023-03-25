#include "main.h"

/**
 * print_square -  print squares of #
 * @size: number of times # should be printed
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (i = 0 i < size; i++)
		{
			_putchar('#');
		}
		_putchar('#');
	}

	_putchar('\n');
}
