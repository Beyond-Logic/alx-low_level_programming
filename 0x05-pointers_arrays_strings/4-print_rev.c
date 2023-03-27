#include "main.h"

/**
 * print_rev - Print a String in Reverse
 * @s: s
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
