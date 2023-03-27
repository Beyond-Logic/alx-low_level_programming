#include "main.h"

/**
 * _puts2 - Print every other string
 * @str: str
 */

void _puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			continue;
		}
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}