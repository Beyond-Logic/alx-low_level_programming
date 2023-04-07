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
	int i, multiply = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			multiply = atoi(argv[1]) * atoi(argv[2]);
		}
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", multiply);

	return (0);
}
