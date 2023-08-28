#include "main.h"
/**
 * _strstr - Finds the first occurrence of a substring in a string.
 *
 * @haystack: Pointer to the string to be searched.
 * @needle: Substring to search for.
 *
 * Return: Pointer to the beginning of the located substring, or NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
