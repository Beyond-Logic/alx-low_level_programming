#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: s
 * Return: converted string
 */

int _atoi(char *s)
{
	int answer = 0;

	int sign = 1;

	int i = 0;

	int digit_found = 0;


	while (*s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			digit_found = 1;
			answer = answer * 10 + (s[i] - '0');
		}
		else
		{
			if (digit_found)
			{
				break;
			}
		}

		i++;
	}

	return (answer * sign);

}
