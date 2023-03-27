#include "main.h"

/**
 * rev_string - String in Reverse
 * @s: s
 */

void rev_string(char *s)
{
	int len = 0;

	int i = 0;

	int j;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 0;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
