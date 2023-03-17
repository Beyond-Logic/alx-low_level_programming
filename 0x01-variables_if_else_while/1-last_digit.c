#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int last_digit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = abs(n) % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}
	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);
	}
	else
	{
		printf("%s %d is 0 and is 0\n", str, n);
	}

	return (0);
}
