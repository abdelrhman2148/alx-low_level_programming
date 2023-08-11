#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c program that prints lowercase except q and e
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
			character++;
		putchar(character);
		character++;
	}
	putchar('\n');

	return (0);
}
