#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in a string of any of a set.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Set of bytes to search for.
 *
 * Return: Pointer to the first occurrence or NULL if no such byte.
*/
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		char *a;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
