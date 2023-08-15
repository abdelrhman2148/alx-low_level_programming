#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - this function utilize on the putchar to print alphabet
 *
 * Return: No return value
*/
void print_alphabet(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');
}
