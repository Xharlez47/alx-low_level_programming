#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the string given
 * Return: NULL if str = NULL or pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int size, new = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * (new) + 1);
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size]; size++)
	{
		ptr[size] = str[size];
		new++;
	}
	ptr[new] = '\0';
	return (ptr);
}
