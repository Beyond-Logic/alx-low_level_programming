#include "main.h"

/**
 * print_triangle -  print triangle of "#"
 * @size: number of times # should be printed
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{

		_putchar('#');
		
		_putchar('\n');

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
}
