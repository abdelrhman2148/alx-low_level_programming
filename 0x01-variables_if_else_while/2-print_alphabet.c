#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this c programm make the letters smaller
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
