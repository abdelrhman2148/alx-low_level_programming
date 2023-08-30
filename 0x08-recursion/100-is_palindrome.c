#include "main.h"
#include "string.h"
/**
 * is_palindrome_recursive - this function uses a recursive approach
 *        to check whether the characters at symmetric positions are the same.
 *
 * @s: the string to check
 * @left: first int
 * @right: secound int
 *
 * Return: 1 or 0 or is_palindrome_recursive
*/
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - this function checks if a given string is a palindrome
 *
 * @s: the string to check
 *
 * Return: is_palindrome_recursive
*/
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
