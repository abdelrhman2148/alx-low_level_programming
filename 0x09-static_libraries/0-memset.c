#include "main.h"
/**
 * *_memset - this function work as memset functiom in c
 *
 * @s: the string
 * @b: like container  for s
 * @n: the integer for memset
 *
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
