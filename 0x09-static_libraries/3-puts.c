#include "main.h"
/**
 * _puts - this function prints str as string
 *
 * @str: as string parameter to take the input
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

