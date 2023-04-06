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
		return (len + _puts_recursion(s[len] - 1));
		len++;
	}

	_putchar('\n');
}
