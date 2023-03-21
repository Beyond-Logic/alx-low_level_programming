#include "main.h"

/**
 * _islower - check if alphabet is lowercase
 * @c: the alphabet to be checked
 *
 * Return: 1 if the c is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
