#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string to check for needle
 * @needle: pointer being searched for in haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (haystack[i])
	{
		while ((haystack[i] == needle[0]) && needle[j])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return ('\0');
}
