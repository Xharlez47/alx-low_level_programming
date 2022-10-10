#include "dog.h"

/**
 * new_dog -  a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name 
 * Return: Null id the fnction fails  else a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (!new_dog || !name || !owner)
	{
		return (NULL);
	}
	n = malloc(strlength(name) + 1);
	if (!n)
	{
		return (free(new_dog), NULL);
	}
	n = strdup(name);
	new_dog->name = n;
	o = malloc(strlength(owner) + 1);
	if (!o)
	{
		return (free(new_dog->name), free(new_dog), NULL);
	}
	o = strdup(owner);
	new_dog->owner = o;
	new_dog->age = age;
	return (new_dog);
}
/**
 * strlength - returns the length of a string
 * @s: string s
 *
 * Return: length of string
 */

int strlength(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}
/**
 * strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string
 */

char *strdup(char *str)
{
	int i, len;
	char *copy;

	if (!str)
	{
		return (NULL);
	}
	len = strlength(str);
	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = 0;
	return (copy);
}
