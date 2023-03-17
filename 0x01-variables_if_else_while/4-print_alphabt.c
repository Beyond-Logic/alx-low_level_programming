#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == 'q' || j == 'e')
		{
			continue;
		}
		putchar(j);
	}

	putchar('\n');

	return (0);

}
