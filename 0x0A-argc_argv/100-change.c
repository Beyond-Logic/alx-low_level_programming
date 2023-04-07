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
	int i, centvalue = 0;

	if (argc == 1)
	{
		for (i = 0; i < argc; i++)
		{

			centvalue = centvalue + atoi(argv[i]);
		}

		printf("%d\n", centvalue);

	}
	else
	{
		printf("Error\n");

		return (1);
	}


	return (0);
}
