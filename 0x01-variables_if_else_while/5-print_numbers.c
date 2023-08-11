#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c program prints all single digit numbers of base 10
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		printf("%i", dig);
		dig++;
	}
	printf("\n");

	return (0);
}
