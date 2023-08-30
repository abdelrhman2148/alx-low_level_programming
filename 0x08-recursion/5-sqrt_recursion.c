#include "main.h"
/**
 * _sqrt_help - this recursive helper function find the natural square root
 *
 * @n: the input int
 * @start: the start range to search in
 * @end: the end of the range
 *
 * Return: -1 or mid or _sqrt_helper
*/
int _sqrt_help(int n, int start, int end)
{
	int mid = start + (end - start) / 2;

	if (start > end)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_help(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_help(n, mid + 1, end));
	}
}
/**
 * _sqrt_recursion - this function calculate square root
 *
 * @n: the input integer
 *
 * Return: -1 or _sqrt_helper
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_help(n, 0, n));
}
