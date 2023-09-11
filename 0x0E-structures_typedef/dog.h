#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - this struct have an info for dog store
 * @name: this for name of a dog
 * @age: for the dogs age
 * @owner: for the owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
