#include "main.h"
/**
 * print_alphabet_x10 - this function prints alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int line, character;

	for (line  = 0; line <= 9; line++)
	{
	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');
	}
}
