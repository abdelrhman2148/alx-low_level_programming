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
	int i, num_bytes;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_ptr = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ((unsigned char *)main_ptr)[i]);
	}
	printf("\n");
	return (0);
}
