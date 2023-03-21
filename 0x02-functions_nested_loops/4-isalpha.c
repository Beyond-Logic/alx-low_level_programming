#include "main.h"

/**
 * _isalpha - check if alphabet is lowercase
 * @c: the alphabet to be checked
 *
 * Return: 1 if the c is uppercase. 0 otherwise
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
