#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: A pointer to a new string containing concatenated arguments.
 *         NULL if ac is 0 or av is NULL, or if memory allocation fails.
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int index = 0;
	int total_len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}
	concat = (char *)malloc(sizeof(char) * (total_len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[index] = av[i][j];
			index++;
		}
		concat[index] = '\n';
		index++;
	}
	concat[index] = '\0';
	return (concat);
}
