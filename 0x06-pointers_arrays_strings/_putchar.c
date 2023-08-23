#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: write ch stand for character to stdout
 *
 * Return: 1 on success or -1 on error
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
