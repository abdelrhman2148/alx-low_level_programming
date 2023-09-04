#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - this function takes a string str as a parameter and returns a
 *                    pointer to a newly allocated space in memory containing
 *                          a copy of the input string
 *
 * @str: the input string
 *
 * Return: duplicate.
*/
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size_t length = strlen(str);
		char *duplicate = (char *)malloc((length + 1) * sizeof(char));

		if (duplicate == NULL)
		{
			return (NULL);
		}
		strcpy(duplicate, str);
		return (duplicate);
	}
}
