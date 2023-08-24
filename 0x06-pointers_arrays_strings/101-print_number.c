#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 *
 * @n: The integer to be printed
*/
void print_number(int n)
{
	unsigned int divisor = 1;
	unsigned int temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}

