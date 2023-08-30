#include "main.h"
/**
 * factorial - this function calculate factorial n
 *
 * @n: the integer to cal factorial for
 *
 * Return: -1 or 1 or the factorial of next char
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
