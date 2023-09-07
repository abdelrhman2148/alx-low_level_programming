#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isNumeric - this function check if a string contains only digits
 *
 * @str: this is the string will check
 *
 * Return: 0 or 1
*/
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * multiply - this function multiply two positive numbers
 *
 * @num1: first int taken
 * @num2: secound int taken
 *
 * Return: multi of the two int
*/
long multiply(int num1, int num2)
{
	return ((long)num1 * num2);
}
/**
 * main - Entry point
 *
 * @argc: int
 * @argv: pointer to char
 *
 * Return: 98 or 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	long result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);
	printf("%ld\n", result);
	return (0);
}
