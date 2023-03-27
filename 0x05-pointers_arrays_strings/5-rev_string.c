#include "main.h"

/**
 * rev_string - String in Reverse
 * @s: s
 */

void rev_string(char *s)
{

	if (s == NULL)
	{
		return;

	}
	int len = 0;

	int j = 0;

	int k = len - 1;

	while (s[len] != '\0')
	{
		len++;
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
