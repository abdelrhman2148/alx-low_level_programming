#include "main.h"
/**
 * _islower - this function check if lowercase or uppercase
 *
 * @c: is to check the input
 *
 * Return: return 1 if c is lowercase else always 0 (succes)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

