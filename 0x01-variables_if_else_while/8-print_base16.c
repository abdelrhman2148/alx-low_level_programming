#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this C prog convert to hex
 *
 * Return: Always 0 (succes)
*/
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
