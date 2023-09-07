#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: a pointer to the newly allocated memory block, or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, j;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}
	else
	{
		for (j = 0; j < new_size; j++)
		{
			*((char *)new_ptr + j) = *((char *)ptr + j);
		}
	}
	free(ptr);
	return (new_ptr);
}
