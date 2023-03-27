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

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			digit_found = 1;
			int digit = s[i] - '0';

			if (answer > INT_MAX / 10 || (answer == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				if (sign == -1)
				{
					return (INT_MIN);
				}
				else
				{
					return (INT_MAX);
				}
			}

			answer = answer * 10 + digit;
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
