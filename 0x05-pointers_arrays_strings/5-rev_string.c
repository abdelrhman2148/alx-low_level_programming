#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse a string in place
 * @s: The input string to reverse
*/

void rev_string(char *s)
{
	int length = strlen(s);
	int half_length = length / 2;
	int i;

	for (i = 0; i < half_length; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

