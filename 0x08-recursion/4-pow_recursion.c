#include "main.h"
/**
 * _pow_recursion - calculate the value of x raised to the power of y
 *
 * @x: first int
 * @y: secound int
 *
 * Return: -1 or 1 or the value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
