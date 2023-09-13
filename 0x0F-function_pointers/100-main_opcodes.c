#include <stdio.h>
#include "function_pointers.h"
/**
 * main - Entry point
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0 or 1 or 2.
*/
int main(int argc, char *argv[])
{
	int numBytes, i;
	char *opcodeArray;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodeArray = (char *)main;

	for (i = 0; i < numBytes; i++)
	{
		if (i == numBytes - 1)
		{
			printf("%02hhx\n", opcodeArray[i]);
			break;
		}
		printf("%02hhx ", opcodeArray[i]);
	}
	return (0);
}
