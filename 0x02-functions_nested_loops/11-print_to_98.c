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

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	printf("\n");
}
