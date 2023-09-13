#include <stdio.h>
/**
 * array_iterator - this function executes a function
 *                given as a parameter on each element of an array
 *
 * @array: pointer to an integer array.
 * @size: The size of the array.
 * @action: pointer to a function that takes an integer as a parameter
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
