#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function calculate the change
 *
 * @argc: int count
 * @argv: char vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int cents, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	count = 0;
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
