#include <stdio.h>
/**
 * main - Entry point to function that return the num of arg
 *
 * @argc: first arg to count
 * @argv: sec arg as string as vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
