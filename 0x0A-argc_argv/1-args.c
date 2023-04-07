#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: argc
  * @argv: argv
  * Return: Return 0;
  */

int main(int argc, char *argv[])
{

	int i, sum = 0, sum1;

	for (i = 0; i < argc; i++)
	{
		sum = sum + i;
		sum1 = sum1 + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
