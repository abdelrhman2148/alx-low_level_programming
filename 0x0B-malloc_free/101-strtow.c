#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
 * strtow - Split a string into words.
 *
 * @str: The input string.
 *
 * Return: A pointer to an array of strings or NULL if str is NULL or empty.
*/
char **strtow(char *str)
{
	char **words = NULL;
	int word_count = 0;
	int i, j, len = strlen(str);
	int word_start = 0, word_length = 0, word_index = 0;

	if (str == NULL || *str == '\0')
                return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_start = i;
			word_length = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				word_length++;
			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], &str[word_start], word_length);
			words[word_index][word_length] = '\0';
			word_index++;
		}
	}
	words[word_count] = NULL;
	return (words);
}
