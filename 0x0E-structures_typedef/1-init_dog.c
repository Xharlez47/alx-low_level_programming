#include "dog.h"

/**
 * init_dog - a function that initializes the struct variables
 * @name: String literal
 * @d: Pointer to struct dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
