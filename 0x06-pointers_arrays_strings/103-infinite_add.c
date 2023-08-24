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
	int i = 0, j = 0, k = 0;
	int left, right;
	char temp;

	while (n1[i] != '\0' || n2[j] != '\0')
	{
		int num1 = (i < (int)strlen(n1)) ? (n1[i] - '0') : 0;
		int num2 = (j < (int)strlen(n2)) ? (n2[j] - '0') : 0;
		int sum = num1 + num2 + carry;

		left = 0;
		right = k - 1;
		temp = r[left];
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
		i++;
		j++;
		if (k == size_r - 1)
		{
			r[k] = '\0';
			return (r);
		}
		if (carry > 0)
		{
			r[k++] = carry + '0';
		}
		r[k] = '\0';
		while (left < right)
		{
			r[left] = r[right];
			r[right] = temp;
			left++;
			right--;
		}
	}
	return (r);
}

