#include "main.h"

/**
 * str_concat - a funcrion that concatenates two strings
 * @s1: a string given
 * @s2: another string
 * Return: NUll on failure of the function or empty string
 */

char *str_concat(char *s1, char *s2)
{
	int size, new = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * (new + 1));
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (size = 0; s1[size]; size++)
	{
		*(s1 + size) = s2[new];
		new++;
		size++;
	}
	ptr = *str
	*(ptr + size) = '\0';
	return (ptr);
}
