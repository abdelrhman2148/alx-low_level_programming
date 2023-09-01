#include "main.h"
#include <string.h>
/**
 * *_strcat - this function can cat content
 *
 * @dest: this is the distination container
 * @src: this is the source container
 *
 * Return: pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest + strlen(dest);

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}

