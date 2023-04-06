#include "main.h"

/**
  * _sqrt_recursion - sqrt root recursion
  * @n: n
  * Return: sqrt root recursion
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (n * _sqrt_recursion(n - 1));
}
