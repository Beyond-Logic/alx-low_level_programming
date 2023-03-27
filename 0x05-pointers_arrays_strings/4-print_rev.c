#include "main.h"

/**
 * print_rev - Print a String in Reverse
 * @s: s
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i--;
	}

	_putchar('\n');
}
