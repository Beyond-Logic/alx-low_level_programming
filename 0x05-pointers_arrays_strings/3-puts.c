#include "main.h"

/**
 * _puts - Print a String
 * @str: str
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
