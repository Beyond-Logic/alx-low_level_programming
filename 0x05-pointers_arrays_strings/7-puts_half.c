#include "main.h"

/**
 * puts_half - Print half of a string with a condition
 * @str: str
 */

void puts_half(char *str)
{
	int len = 0;

	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		len++;
	}

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
