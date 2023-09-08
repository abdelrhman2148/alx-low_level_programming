#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * is_digit - checks if character is a digit
 * @ch: the character to check
 *
 * Return: 1 if it's a digit, 0 otherwise
*/
int is_digit(int ch)
{
	return (ch >= '0' && ch <= '9');
}
/**
 * string_length - returns the length of a string
 *
 * @str: the string whose length to check
 *
 * Return: integer length of the string
*/
int string_length(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * big_multiply - multiply two big number strings
 *
 * @num1: the first big number string
 * @num2: the second big number string
 *
 * Return: the product big number string
*/
char *big_multiply(char *num1, char *num2)
{
	char *result;
	int len1, len2, i, j, k, carry, product;

	len1 = string_length(num1);
	len2 = string_length(num2);
	result = malloc(len1 + len2 + 1);
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	for (i = len1 - 1; i >= 0; i--)
	{
		if (!is_digit(num1[i]))
		{
			free(result);
			printf("Error\n");
			exit(98);
		}
		carry = 0;
		for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
		{
			if (!is_digit(num2[j]))
			{
				free(result);
				printf("Error\n");
				exit(98);
			}
			product = (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0') + carry;
			carry = product / 10;
			result[k] = (product % 10) + '0';
		}
		if (carry)
			result[k] += carry;
	}
	return (result);
}
/**
 * main - multiply two big number strings
 *
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
*/
int main(int argc, char **argv)
{
	char *result;
	int i, hasNonZero = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	result = big_multiply(argv[1], argv[2]);
	for (i = 0; result[i] != '\0'; i++)
	{
		if (result[i] != '0')
			hasNonZero = 1;
		if (hasNonZero)
			_putchar(result[i]);
	}
	if (!hasNonZero)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
