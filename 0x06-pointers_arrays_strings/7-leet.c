#include <stdlib.h>
#include "main.h"
/**
 * *leet - this function replace specfic words with 43071
 *
 * @str: like containet for a string
 *
 * Return: str
*/

char *leet(char *str)
{
	char leetMap[256];
	int i;

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		char replacement = leetMap[(unsigned char)str[i]];

		if (replacement)
		{
			str[i] = replacement;
		}
	}
	return(str);
}
