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
	int a = 1, b = 2, count = 0;

	printf("%d, %d, ", a, b);
	count += 2;

	while (count < 98)
	{
		int next = a + b;

		if (count == 97)
		{
			printf("%d\n", next);
		}
		else
		{
			printf("%d, ", next);
		}
		count++;

		a = b;
		b = next;
	}
	return (0);
}

