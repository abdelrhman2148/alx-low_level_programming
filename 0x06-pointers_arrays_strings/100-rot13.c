#include "main.h"
/**
 * *rot13 - this function encode by rot13
 *
 * @str: the input for the string
 *
 * Return: the encoded string
*/

char *rot13(char *str)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *result = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == alpha[i])
			{
				*str = rot13_alpha[i];
				break;
			}
		}
		str++;
	}
	return (result);
}
