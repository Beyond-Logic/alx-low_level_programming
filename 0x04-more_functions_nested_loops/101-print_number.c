#include "main.h"
#include <stdio.h>

/**
 * print_number -  print an integer #
 * @n: number to print
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int temp = n;

	int num_digits = 0;

	do {
		temp /= 10;
		num_digits++;
	}
	while
	{
		(temp != 0);
	}

	for (int i = num_digits - 1; i >= 0; i--)
	{
		int digit = (n / (int)pow(10, i)) % 10;

		_putchar(digit + '0');
	}

}
