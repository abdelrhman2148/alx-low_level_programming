#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - this function searches for an integer in an array
 *                                           using a comparison function.
 *
 * @array: pointer to an integer array.
 * @size: The number of elements in the array.
 * @cmp: pointer to a comparison function.
 *
 * Return: i or -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
