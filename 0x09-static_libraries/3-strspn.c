#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strspn - this function gets the length of a prefix substring.
 *
 * @s: pointer
 * @accept: to the set of acceptable characters
 *
 * Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
