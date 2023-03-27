#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Password Generator
 * Return: Password Generator
 */

int main(void)
{
	const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-= ";

	const int password_length = 15;

	char password[16];

	int i;

	srand(time(NULL));

	do {
		for (i = 0; i < password_length; i++)
		{
			int random_index = rand() % (int) (sizeof(valid_chars) - 1);

			password[i] = valid_chars[random_index];

		}

		password[password_length] = '\0';
	} while (strcmp(password, "Tada! Congrats") != 0);

	printf("%s\n", password);

	return (0);
}
