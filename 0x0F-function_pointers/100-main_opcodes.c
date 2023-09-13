#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - this function responsible for print the opcodes of a func.
 *
 * @num_bytes: The number of bytes to print
*/
void print_opcodes(int num_bytes)
{
	void *addr;
	unsigned char *ptr;
	int i;

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	addr = (void *)&print_opcodes;
	ptr = (unsigned char *)addr;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
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
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	print_opcodes(num_bytes);
	return (0);
}
