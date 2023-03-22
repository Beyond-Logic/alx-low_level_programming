#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit
 * @n: n to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = abs(n) % 10;

	return (lastDigit);
}
