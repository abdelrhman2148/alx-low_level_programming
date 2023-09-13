#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - this function takes a name as a string and a function pointer
 *                          to print the name either as is or in uppercase
 *
 * @name: the name
 * @f: a function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
