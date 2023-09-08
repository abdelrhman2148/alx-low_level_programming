#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * multiply_strings - multiplies two positive numbers represented as strings
 *
 * @num1_str: first number as string
 * @num2_str: second number as string
 *
 * Return: the result of the multiplication as a string
*/
char *multiply_strings(const char *num1_str, const char *num2_str)
{
	int result_len, *result, len1 = 0, len2 = 0, i, j, digit1;
	int carry = 0, digit2, product, index = 0;
	char *result_str;

	if (!is_digit(num1_str) || !is_digit(num2_str))
		return (NULL);
	while (num1_str[len1])
		len1++;
	while (num2_str[len2])
		len2++;
	result_len = len1 + len2;
	result = calloc(result_len, sizeof(int));
	if (!result)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1_str[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2_str[j] - '0';
			product = digit1 * digit2 + result[i + j + 1] + carry;
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i + j + 1] += carry;
	}
	result_str = malloc(result_len + 1);
	if (!result_str)
		free(result);
	return (NULL);
	for (i = 0; i < result_len; i++)
	{
		if (result[i] != 0 || index > 0)
		{
			result_str[index++] = result[i] + '0';
		}
	}
	result_str[index] = '\0';
	free(result);
	return (result_str);
}
/**
 * main - Entry point
 *
 * @argc: int count
 * @argv: char vector
 *
 * Return: 98 or 0
*/
int main(int argc, char *argv[])
{
	const char *num1_str, *num2_str;
	char *result_str;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	result_str = multiply_strings(num1_str, num2_str);
	if (result_str)
	{
		printf("%s\n", result_str);
		free(result_str);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
}
