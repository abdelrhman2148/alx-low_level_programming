#include <ctype.h>
#include "main.h"
/**
 * *cap_string - this function is to capitalize all characters
 *
 * @str: the input string
 *
 * Return: str as string
*/

char *cap_string(char *str)
{
	int i, capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace((unsigned char)str[i]) || ispunct((unsigned char)str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && isalpha((unsigned char)str[i]))
		{
			str[i] = toupper((unsigned char)str[i]);
			capitalize_next = 0;
		}
		else
		{
			str[i] = tolower((unsigned char)str[i]);
		}
	}
	return (str);
}
