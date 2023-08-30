#include "main.h"
/**
 * wildcmp_recursive - this function checks characters of both strings
 *           and handles the cases of matching characters and the wildcard '*'
 *
 * @s1: first container to check
 * @s2: secound container.
 *
 * Return: 1 or wildcmp_recursive
*/
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return ((wildcmp_recursive(s1, s2 + 1)) ||
			(*s1 != '\0' && (wildcmp_recursive(s1 + 1, s2))));
	}
	if (*s1 == *s2)
	{
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	}
	return (0);
}
/**
 * wildcmp - function serves as the entry point
 *          and provides the initial parameters for the recursive function.
 *
 * @s1: the first container to check
 * @s2: the secound container to check
 *
 * Return: wildcmp_recursive
*/
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
