#include "main.h"

/**
 * print_line - link to print
 * @n: number of characters
 *
 * Return: print_line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == i)
		{
			_putchar('\n');
		}

		_putchar('_');
	}

	_putchar('\n');
}

