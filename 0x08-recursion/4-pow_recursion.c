#include "main.h"
#include <math.h>

/**
  * _pow_recursion - POW Recursion
  *@x: x
  *@y: y
  * Return: Pow Recursion
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	return (y * _pow_recursion((pow(x, y)) - 1));
}
