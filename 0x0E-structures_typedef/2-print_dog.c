#include <stdio.h>
#include "dog.h"
/**
 * print_dog - this function prints a struct dog
 *
 * @d: the dog struct that will be printed
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
