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
	unsigned long long a = 1, b = 2, count = 0;

	printf("%llu, %llu, ", a, b);
	count += 2;

	while (count < 98)
	{
		unsigned long long next = a + b;

		if (count == 97)
		{
			printf("%llu\n", next);
		}
		else
		{
			printf("%llu, ", next);
		}
		count++;

		a = b;
		b = next;
	}
	return (0);
}
