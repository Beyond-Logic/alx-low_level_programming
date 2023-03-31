#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - cap_string
 * @str: str
 * Return: return
 */

char *cap_string(char *str)
{
	int i = 0;

	str[i] = toupper(str[i]);

	i++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ')
		{
			str[i] = toupper(str[i]);
		}

		i++;
	}

	return (str);
}
