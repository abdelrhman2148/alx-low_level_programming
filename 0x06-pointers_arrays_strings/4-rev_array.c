#include "main.h"
/**
 * reverse_array - this function reverse inegers in an array
 *
 * @a: first container
 * @n:  the number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
