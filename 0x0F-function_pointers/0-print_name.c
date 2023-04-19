#include "main.h"

/**
 * print_name - Print Name
 * @name: name
 * @f: f
 */

void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(name);
		name++;
	}
}
