#include "main.h"
#include <stdlib.h>
/**
 * array_range - this function creates an array of integers
 *
 * @min: first int arg
 * @max: sec int arg
 *
 * Return: result
*/
int *array_range(int min, int max)
{
	int i, *result;

	if (min > max)
	{
		return (NULL);
	}
	result = (int *)malloc(sizeof(int) * (max - min + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
