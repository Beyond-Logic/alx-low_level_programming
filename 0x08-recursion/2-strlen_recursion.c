#include "main.h"

/**
  * _strlen_recursion - Length Recursion
  * @s: s
  * Return: integer
  */

int _strlen_recursion(char *s)
{
	(return *s ? 1 + _strlen_recursion(s + 1) : 0);
}
