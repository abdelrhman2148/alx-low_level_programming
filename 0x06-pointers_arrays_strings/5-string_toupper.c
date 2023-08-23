#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - this function work as shift lowercase
 *
 * @str: the string that will be returned
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper((unsigned char)str[i]);
	}
	return (str);
}
