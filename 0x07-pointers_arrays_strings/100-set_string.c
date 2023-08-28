#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * set_string - this function  sets the value of a pointer to a char
 *
 * @s: double pointer to char
 * @to: pointer to char.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
