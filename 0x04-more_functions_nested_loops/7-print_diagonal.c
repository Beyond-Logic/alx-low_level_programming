#include "main.h"

/**
 * print_diagonal -  print diagonal
 * @n: number of times "\" should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
