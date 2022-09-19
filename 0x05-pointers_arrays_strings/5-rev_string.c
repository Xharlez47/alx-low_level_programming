#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0;

	while (s[l])
{
	_putchar(s[l]);
	l--;
}
	_putchar('\n');
}
