#include "main.h"
/**
 * print_most_numbers - this function prints with putchar from 0 to 9
 *
 * Return: Always 0 (sucess)
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + 48);
	}
	_putchar('\n');
}
