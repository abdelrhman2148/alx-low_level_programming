#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The input string.
 *
 * Return: The converted integer.
*/

int _atoi(char *s)
{
	unsigned int result = 0;
	unsigned int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
