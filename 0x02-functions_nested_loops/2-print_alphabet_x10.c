#include "main.h"

/**
  * print_alphabet_x10 - print the alphabet 10 times
 */

void print_alphabet_x10(void)

{
	char c;
	int i;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(c[i]);
		}
	}
	_putchar('\n');
}
