#include "main.h"

/**
 * main - Entry point
 *
 * Description: C prog for fibonacci numbers last version
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count = 0;
	unsigned int a = 1, b = 2;

	printf("%u, %u, ", a, b);
	count += 2;

	while (count < 98)
	{
		a = a + b;
		b = a - b;
		count++;

		printf("%u", a);

		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
