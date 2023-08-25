#include "main.h"
#include <ctype.h>
/**
 * print_buffer - this function can print buffer
 *
 * @b: this is the input char
 * @size: this is the integer
*/
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);
				if (j % 2 == 1)
				{
					printf(" ");
				}
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];

			printf("%c", (c >= 32 && c <= 126) ? c : '.');
		}
		printf("\n");
	}
}
