#include "main.h"

/**
 * _puts_recursion - Recursion
 * @s: s
 */

void _puts_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
		_putchar(s[len]);
	}

	_putchar('\n');
}
