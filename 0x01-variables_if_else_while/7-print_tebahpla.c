#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c prog print lowercase letters in reverse
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');

	return (0);
}
