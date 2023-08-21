#include "main.h"
/**
 * _strlen - this function work as strlen function
 *
 * @s: input parameter to recieve strings
 *
 * Return: length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
