#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Print every other character of a string followed by a newline.
 * @str: The input string
*/
void puts2(char *str)
{
	int i, length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
