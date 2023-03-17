#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	int i;

	long int l;

	long long int ll;

	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu bytes(s)\n", sizeof(i));
	printf("size of a long int: %lu bytes(s)\n", sizeof(l));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(ll));
	printf("size of a float: %lu bytes(s)\n", sizeof(f));

	return (0);

}
