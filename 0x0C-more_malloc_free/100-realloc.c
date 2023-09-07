#include "main.h"
#include <string.h>
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
	size_t min_size;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
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
	min_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
