#include "main.h"

/**
 * rev_string - String in Reverse
 * @s: s
 */

void rev_string(char *s)
{
	int len = 0;

	int i = 0;

	int j = len - 1;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
