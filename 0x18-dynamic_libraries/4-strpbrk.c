#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: s that matches  bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return ('\0');
}
