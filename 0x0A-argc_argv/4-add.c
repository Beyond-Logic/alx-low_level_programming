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
	int i, positivenumbers = 0;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			positivenumbers = positivenumbers + atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
	}

	printf("%d\n", positivenumbers);

	return (0);
}
