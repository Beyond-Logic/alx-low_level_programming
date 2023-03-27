#include "main.h"

/**
 * swap_int - Swap Int
 * @a: a
 * @b: b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*b = *b;
	*b = temp;
}
