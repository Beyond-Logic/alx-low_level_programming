#include "main.h"

/**
 * puts2 - Print every other string
 * @str: str
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}

	_putchar('\n');
}
