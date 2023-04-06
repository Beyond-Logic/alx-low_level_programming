#include "main.h"

/**
  * _pow_recursion - POW Recursion
  *@x: x
  *@y: y
  * Return: Pow Recursion
  */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (-1);
}
