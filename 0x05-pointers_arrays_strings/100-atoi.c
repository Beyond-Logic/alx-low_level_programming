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

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if ((s[i] >= '0') && (s[i] <= '9'))
		{
			answer = answer * 10 + (s[i] - '0');
		}
		else if (answer > 0)
		{
			break;
		}

		i++;
	}

	return (answer * sign);

}
