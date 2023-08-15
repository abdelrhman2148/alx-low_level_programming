#include "main.h"

/**
 * print_last_digit - prints the last dig of a num
 *
 * @num: take an input
 *
 * Return: lastDig
*/

int print_last_digit(int num)
{
	int lastDig;

	if (num < 0)
		lastDig = -1 * (num % 10);
	else
		lastDig = num % 10;

	_putchar(lastDig + '0');
	return (lastDig);
}
