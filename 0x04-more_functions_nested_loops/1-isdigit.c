#include "main.h"
/**
 * _isdigit - This C program check if the variable is the digit between 0 - 9
 *
 * @c: this is the input
 *
 * Return: 1 if digit from 0 - 9 else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
