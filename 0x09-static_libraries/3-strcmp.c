#include "main.h"

/**
 * _strcmp - this function works as strcmp function
 *
 * @s1: first container
 * @s2: secound container
 *
 * Return: the diff between the ASCII values of the current characters
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
