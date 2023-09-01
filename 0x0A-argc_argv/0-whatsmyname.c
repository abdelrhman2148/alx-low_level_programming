#include <stdio.h>
/**
 * main - Entry point this function print the program name
 *
 * @argc: the first argument count
 * @argv: the sec arg vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
