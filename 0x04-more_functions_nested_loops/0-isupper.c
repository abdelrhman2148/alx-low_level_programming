#include "main.h"
/**
 * _isupper - This C program check if the variable is uppercase
 *
 * @c: this is the input 
 *
 * Return: 1 if upper else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
