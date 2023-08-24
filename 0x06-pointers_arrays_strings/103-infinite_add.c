#include "main.h"
#include <string.h>
/**
 * *infinite_add - This function adds two numbers.
 *
 * @n1: the first number as a string
 * @n2: the second number as a string
 * @r: buffer to store the result
 * @size_r: size of the result buffer
 *
 * Return: a pointer to the result buffer
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = 0;
	int num1, num2, sum, left, right;

	while (i >= 0 || j >= 0)
	{
		num1 = (i >= 0) ? (n1[i] - '0') : 0;
		num2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = num1 + num2 + carry;
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
		if (k == size_r - 1)
		{
			return (0);
		}
	}
	if (carry > 0)
	{
		r[k++] = carry + '0';
	}
	r[k] = '\0';
	left = 0;
	right = k - 1;
	while (left < right)
	{
		char temp = r[left];

		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}
	return (r);
}
