#include "main.h"

/**
 * print_name - Print Name
 * @name: name
 * @f: f
 */

void print_name(char *name, void (*f)(char *));
{
	int i;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}

	_putchar('\n');
}
