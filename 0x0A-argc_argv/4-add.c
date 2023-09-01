#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point to add function
 *
 * @argc: int count
 * @argv: char for vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0, num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *input = argv[i];

		for (j = 0; input[j] != '\0'; j++)
		{
			if (!isdigit(input[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(input);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
