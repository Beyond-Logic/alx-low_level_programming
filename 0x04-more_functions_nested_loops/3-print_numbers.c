#include "main.h"

/**
 * print_numbers -  print 0 - 9
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar("%c", i);
	}
	_putchar('\n');
}
