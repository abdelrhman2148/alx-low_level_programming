#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocate memory while ensuring
 *                                  that it handles allocation failures
 *
 * @b: the size of memory needed to allocate
 *
 * Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
