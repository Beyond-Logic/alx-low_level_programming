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

	int i;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if ((*s >= '0') && (*s <= '9'))
		{
			i = *s - '0';
			answer = answer * 10 + i;
		}
		else if (answer != '0')
		{
			break;
		}

		s++
	}

	return (answer * sign);

}
