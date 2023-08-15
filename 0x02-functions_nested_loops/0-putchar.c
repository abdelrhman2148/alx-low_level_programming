#include "main.h"
/**
 * main - Entry point
 *
 * Description: this c program print _putchar as prototype
 *
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char str[] = "_putchar";
	int character;

	for (character = 0; character < 8; character++)
		_putchar(str[character]);
	_putchar('\n');

	return (0);
}
