#include <stdbool.h>
#include "main.h"
/**
 * is_separator - this function is to deal with saparators
 *
 * @c: the input char
 *
 * Return: true or false
*/
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * *cap_string - this function is to capitalize all characte
 *
 * @str: the input string
 *
 * Return: str as string
*/
char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		new_word = is_separator(str[i]);
	}
	return (str);
}
