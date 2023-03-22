#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - print last digit
 * @n: n to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	return (lastDigit);
}
