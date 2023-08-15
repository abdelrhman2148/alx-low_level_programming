#include "main.h"

/**
 * print_times_table - this function print n tables
 *
 * @n: takes integer input
*/

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return (0);
	}
	for (int num = 0; num <= n; num++)
	{
		for (int multi = 0; multi <= n; multi++)
		{
			printf("%4d, ", num * multi);
		}
		printf("\n");
	}
}

