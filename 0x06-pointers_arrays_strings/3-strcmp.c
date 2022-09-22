#include "holberton.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 if equal, less than 1 or greater than 1
 */

int _strcmp(char *s1, char *s2)
{
		int index = 0;
		int l = 0;

		while (s1[index])
		{
			if (s1[index] != s2[index])
			{
				l = ((s1[index] - '\0') - (s2[index] - '\0'));
					break;
			}
			index++;
		}
		return (l);
}
