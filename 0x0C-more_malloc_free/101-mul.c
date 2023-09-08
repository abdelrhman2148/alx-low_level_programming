#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * isZero - checks if a number is zero.
 * @str: input string.
 *
 * Return: 1 if the number is zero, 0 otherwise.
*/
int isZero(const char *str)
{
	while (*str)
	{
		if (*str != '0')
			return (0);
	}
	str++;
	return (1);
}
/**
 * multiply - multiplies two positive numbers.
 *
 * @num1: first number as a string.
 * @num2: second number as a string.
 *
 * Return: result as a string.
*/
char *multiply(const char *num1, const char *num2)
{
	int i, j, carry, pro, len1, start, len2, lenOut;
	char *result, *finalResult;

	if (isZero(num1) || isZero(num2))
		return ("0");
	len1 = strlen(num1);
	len2 = strlen(num2);
	lenOut = len1 + len2;
	result = (char *)malloc(lenOut + 1);

	if (result == NULL)
	{
		perror("Memory allocation error");
		exit(1);
	}
	for (i = 0; i < lenOut; i++)
	{
		result[i] = '0';
	}
	result[lenOut] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			pro = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = pro / 10;
			result[i + j + 1] = (pro % 10) + '0';
		}
		result[i] += carry;
	}
	start = 0;
	while (result[start] == '0')
	{
		start++;
	}
	finalResult = strdup(result + start);
	free(result);
	return (finalResult);
}
/**
 * main - Entry point program that multiplies two positive numbers.
 *
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
*/
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);
		return (1);
	}
	num1 = argv[1];
	num2 = argv[2];
	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);
	return (0);
}
