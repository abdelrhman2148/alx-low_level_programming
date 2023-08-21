#include "main.h"
/**
 * swap_int - this function swap between a n b
 *
 * @a: first input
 * @b: secound input
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
