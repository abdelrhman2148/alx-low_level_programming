#include "dog.h"
/**
 * new_dog - this function creates a new dog.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = strlen(name);
	int len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(len1 + 1);
	dog->owner = malloc(len2 + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
