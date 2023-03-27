#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Password Generator
 * Return: Password Generator
 */

int main(void)
{
	const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-= ";

	const int password_length = 15;

	char password[password_length + 1];

	int i;

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		int random_index = rand() % (int) (sizeof(valid_chars) - 1);

		password[i] = valid_chars[random_index];

	}

	password[password_length] = '\0';

	printf(password);

	return (0);
}
