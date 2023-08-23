#include "main.h"
/**
 * *_strncpy - this function works like strncpy function
 *
 * @dest: this is the dest container
 * @src: this is the source container
 * @n: this is an int for saving number of char
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

