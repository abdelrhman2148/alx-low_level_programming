#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This C program prints without using puts and printf
 *
 * Return: 1 (error)
*/
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		write(1, q, 59);
		return (1);
}
