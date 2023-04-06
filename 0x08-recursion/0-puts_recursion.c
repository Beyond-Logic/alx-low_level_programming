#include "main.h"

/**
 * _puts_recursion - Recursion
 * @s: s
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s);
		_putchar(*s);
	}
}
