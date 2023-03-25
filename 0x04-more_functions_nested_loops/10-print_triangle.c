#include "main.h"

/**
 * print_triangle -  print triangle of "#"
 * @size: number of times # should be printed
 */

void print_triangle(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{

		_putchar('#');
		_putchar('\n');

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
}
