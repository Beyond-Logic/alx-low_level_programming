#include "main.h"

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
