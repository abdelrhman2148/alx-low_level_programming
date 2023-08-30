#include "main.h"
/**
 * is_prime_recursive - checks if the given number is divisible
 *                                          by any number less than itself
 *
 * @n: the given num
 * @i: the integer to check
 *
 * Return: is_prime_recursive or 1 or 0
*/
int is_prime_recursive(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i - 1));
}
/**
 * is_prime_number - entry point, which handles edge cases and call function
 *
 * @n: integer to check prime
 *
 * Return: 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_recursive(n, n - 1));
}
