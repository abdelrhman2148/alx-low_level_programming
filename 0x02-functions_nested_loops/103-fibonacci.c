#include "main.h"
/**
 * main - Entry point
 *
 * Description: this C program simulate foboncci numbers v-2
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	float total;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		num1 = num2;
		num2 = sum;

	}
	printf("%.0f\n", total);
	return (0);
}
