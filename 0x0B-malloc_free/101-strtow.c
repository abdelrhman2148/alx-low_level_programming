#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
 * strtow - Split a string into words.
 *
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL if str is NULL or empty.
*/
char **strtow(char *str)
{
	int i, j, word_count = 0, index = 0;
	bool in_word = false;
	char *ptr = str;
	char **words;
	char *token;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			if (in_word)
			{
				in_word = false;
				word_count++;
			}
		}
		else
		{
			in_word = true;
		}
		ptr++;
	}
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return NULL;
	}
	in_word = false;
	ptr = str;
	token = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			if (in_word)
			{
				in_word = false;
				token[index] = '\0';
				words[index] = strdup(token);
				if (words[index] == NULL)
				{
					for (i = 0; i < index; i++)
					{
						free(words[i]);
					}
					free(words);
					free(token);
					return (NULL);
				}
				index++;
			}
		}
		else
		{
			in_word = true;
			token[index] = *ptr;
			index++;
		}
		ptr++;
	}
	if (in_word)
	{
		token[index] = '\0';
		words[index] = strdup(token);
		if (words[index] == NULL)
		{
			for (j = 0; j <= index; j++)
			{
				free(words[j]);
			}
			free(words);
			free(token);
			return (NULL);
		}
		index++;
	}
	words[index] = NULL;
	free(token);
	return (words);
}
