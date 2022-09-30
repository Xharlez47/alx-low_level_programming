#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: pointer
 * Return: l
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	l++;
	return (l);
}
