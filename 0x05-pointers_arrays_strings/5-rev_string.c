#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int l, d, f;
	char g;

	for (l = 0; s[l] != '\0'; l++)
	;
	d = 0;
	f = l / 2;
	while (f--)
{
	g = s[l - d - 1];
	s[l - d - 1] = s[d];
	s[d] = g;
	d++;
}
}
