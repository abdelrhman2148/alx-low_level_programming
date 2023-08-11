#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c prog prints using putchar
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		putchar(dig + '0');
		dig++;
	}
	putchar('\n');

	return (0);
}
