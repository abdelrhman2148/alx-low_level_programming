#include "main.h"
/**
 * _print_rev_recursion - this function print strings in reverse
 *
 * @s: the input string
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
