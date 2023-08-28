#include "main.h"
/**
 * *_memcpy - this function iterates through the source memory area
 *				and copies each byte to the corresponding position
 *
 * @dest: like the destination container
 * @src: like source container
 * @n: like the number of bytes to copy.
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
