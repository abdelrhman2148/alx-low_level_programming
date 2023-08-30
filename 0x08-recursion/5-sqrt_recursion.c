#include "main.h"
/**
 * _sqrt_help - this recursive helper function find the natural square root
 *
 * @n: the input int
 * @mid: value to return
 *
 * Return: -1 or mid or _sqrt_helper
*/
int _sqrt_help(int n, int mid)
{
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_help(n, mid + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - this function calculate square root
 *
 * @n: the input integer
 *
 * Return: _sqrt_helper
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}
