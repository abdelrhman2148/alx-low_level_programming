#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 *
 * @n: The integer to be printed
*/
void print_number(int n)
{
	unsigned int var;

	var = n;
	if (n < 0)
	{
		_putchar('-');
		var  = -n;
	}
	if (var / 10 != 0)
	{
		print_number(var / 10);
	}
	_putchar((var % 10) + '0');
}
