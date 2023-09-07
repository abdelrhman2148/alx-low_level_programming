#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - this function is designed to concatenate two strings
 *
 * @s1: the first string
 * @s2:L the sec one string to concat
 * @n: specifying the maximum number of char to concat from s2
 *
 * Return: pointer to the dynamically allocated and concatenated string result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s2);
	unsigned int len2 = strlen(s2);
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
