#include "main.h"

/**
  * _strlen_recursion - Length Recursion
  * @s: s
  * Return: integer
  */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = count + 1;
		_strlen_recursion(s + 1);
	}

	return (count);
}
