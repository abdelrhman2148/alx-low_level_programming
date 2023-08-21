#include "main.h"
#include <string.h>
/**
 * print_rev - this function to print strings in reverse
 *
 * @s: this input string
*/
void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
