#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (succes)
*/
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}