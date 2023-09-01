#include <stdio.h>
/**
 * main - Entry point to this function that print the arg it takes
 *
 * @argc: int count
 * @argc: char vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
