#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: pointer
 * @c: the character being sort
 * Return: s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + 1) == c)
		return (s + i);
	return (0);
}
