#include "dog.h"
#include <stddef.h>
/**
 * init_dog - this function  initializes a variable of type struct dog
 *
 * @d: the dog that will be initiated
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the ownwr of the dogs
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
