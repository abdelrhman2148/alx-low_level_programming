#include "main.h"
#include <stddef.h>
/**
 * *_strchr - this function locate a character in a string
 *
 * @s: pointer to a character array
 * @c: character c to search for.
 *
 * Return: pointer to s or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
