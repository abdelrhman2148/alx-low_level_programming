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
	int i;
	unsigned int a = 1, b = 2;

	printf("%u, %u, ", a, b);

	for (i = 2; i < 98; i++)
	{
		unsigned int next = a + b;

		printf("%u", next);

		a = b;
		b = next;

		if (i < 97)
		{
			printf(", ");
		}
	}

	printf("\n");
	return (0);
}
