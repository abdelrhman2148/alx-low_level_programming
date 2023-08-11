#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this C prog can print from 1 to  9
 *
 * Return: ALways 0 (succes)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
