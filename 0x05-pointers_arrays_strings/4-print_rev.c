#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l])
	l++;
	while (l--)
{
	_putchar(s[l]);
}
	_putchar('\n');
}
