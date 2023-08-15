#include "main.h"

/**
 * _abs - Entry point this function calculate a value of an integer
 *
 * @num: take an int type input fot the function
 *
 * Return: Always 0 (succes)
*/

int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;
	return (num);
}
