#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERROR_MSG "Error"

/**
 * handle_error - handles errors for the main function
*/
void handle_error(void)
{
	printf("%s\n", ERROR_MSG);
	exit(98);
}
/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, i;

	if (argc != 3)
		handle_error();
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
			handle_error();
	}
	for (i = 0; num2[i]; i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
			handle_error();
	}
	len1 = atoi(num1);
	len2 = atoi(num2);

	if (len1 == 0 || len2 == 0)
		printf("0\n");
	else
		printf("%d\n", len1 * len2);
	return (0);
}
