#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isDigitString - Checks if a string contains only digits.
 *
 * @str: The string to be checked.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
*/
int isDigitString(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isDigitString(argv[1]) || !isDigitString(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return (98);
	}
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
