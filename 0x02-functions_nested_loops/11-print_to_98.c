#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 -  print to 98
 * @n: the parameter
 */

void print_to_98(int n)
{
	int i;

	for (i = abs(n); n <= 98; n++)
	{
		printf("%d,", n);
	}
	printf("\n");
}
