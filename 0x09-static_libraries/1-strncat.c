#include "main.h"
#include "string.h"
/**
 * *_strncat - this function works like strncat function
 *
 * @dest: this is the dest container
 * @src: this is the source container
 * @n: this is an int for saving number of char
 *
 * Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest + strlen(dest);

	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';
	return (dest);
}
