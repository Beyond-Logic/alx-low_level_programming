#include <stdio.h>

/**
 * main - Prime Factor
 * Return: Largest Prime Factorr
 */

int main(void)
{
	long num = 612852475143;

	long largest_factor = 1;

	long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;

			largest_factor = factor;
		}
		else
		{
			factor++;
		}
	}


	printf("%ld\n", largest_factor);

	return (0);


}
