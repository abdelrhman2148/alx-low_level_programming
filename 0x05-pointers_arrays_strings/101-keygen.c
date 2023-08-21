#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point to generate random passwords
 *
 * Return: 0
*/
int main(void)
{
	int num;
	char ch;

	srand(time(NULL));
	while (num <= 2645)
	{
		ch = rand() % 128;
		num += ch;
		putchar(ch);
	}
	putchar(2772 - num);
	return (0);
}
