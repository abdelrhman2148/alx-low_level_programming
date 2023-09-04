#include "main.h"
#include <stdlib.h>
/**
 * *create_array - this function takes two parameters: size and c.
 *           It creates an array of chars of the given size and
 *                     initializes all elements with the specified char c
 *
 * @size: the size of array
 * @c: the array
 *
 * Return: result
*/
char *create_array(unsigned int size, char c)
{
	char *result = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}
	return (result);
}
