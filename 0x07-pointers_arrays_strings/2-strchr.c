#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: pointer
 * @c: the character being sort
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	else
		return ('\0');
	return (0);
}
