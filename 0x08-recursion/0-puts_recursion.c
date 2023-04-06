#include "main.h"

/**
 * _puts_recursion - Recursion
 * @s: s
 */

void _puts_recursion(char *s)
{
	int len = 0;

	if (len <= 0)
	{
		return;
	}
	while (s[len] != '\0')
	{
		return (_puts_recursion(_putchar(s[len])));

		len++;
	}

	_putchar('\n');
}
