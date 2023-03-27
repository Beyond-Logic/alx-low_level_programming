#include "main.h"

/**
 * rev_string - String in Reverse
 * @s: s
 */

void rev_string(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int j = 0;

	int k = i - 1;

	while (i > k)
	{
		char temp = s[j];

		s[j] = str[k];
		s[k] = temp;

		j++;
		k--;
	}
}
