#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c programm print with putchar lower and uppercase
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char character = 'a';
	char CHARACTER = 'A';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	while (CHARACTER <= 'Z')
	{
		putchar(CHARACTER);
		CHARACTER++;
	}
	putchar('\n');

	return (0);
}
