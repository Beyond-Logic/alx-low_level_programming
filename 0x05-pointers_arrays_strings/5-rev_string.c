#include "main.h"

/**
 * rev_string - String in Reverse
 * @s: s
 */

void rev_string(char *s)
{

	int i = 0;

	int j = 0;

	int k = i - 1;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < k)
	{
		char temp = s[j];

		s[j] = s[k];
		s[k] = temp;

		j++;
		k--;
	}
}
