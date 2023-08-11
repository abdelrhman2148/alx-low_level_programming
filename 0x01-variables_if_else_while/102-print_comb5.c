#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c program print all diff comb of two-two digit
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	int num1 = 0, num2 = 0;

	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			int num1_tens = num1 / 10;
			int num1_ones = num1 % 10;
			int num2_tens = num2 / 10;
			int num2_ones = num2 % 10;

			putchar(num1_tens + '0');
			putchar(num1_ones + '0');
			putchar(' ');
			putchar(num2_tens + '0');
			putchar(num1_ones + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
