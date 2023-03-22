#include "main.h"

/**
 * jack_bauer - print every minutes of the day
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (m = 0; m <= 59; m++)
	{
		_putchar(m);

		for (h = 0; h <= 23; h++)
		{
			_putchar(h)
		}
	}
}
