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
	unsigned int i, j, len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	result = malloc(len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
