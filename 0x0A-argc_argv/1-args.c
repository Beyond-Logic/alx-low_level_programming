#include <stdio.h>

/**
  * main - Entry point
  * @argc: argc
  * @argv: argv
  * Return: Return 0;
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}
