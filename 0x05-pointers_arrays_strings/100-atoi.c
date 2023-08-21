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
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		else if (result > 0)
			break;
	} while (*s++);
	return (result * sign);
}
