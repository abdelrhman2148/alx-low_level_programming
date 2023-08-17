#include "main.h"
/**
 * print_numbers - this function prints from 0 to 9 with _putchar
 *
 * Return: Always 0 (succes)
*/
void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar('\n');
}
