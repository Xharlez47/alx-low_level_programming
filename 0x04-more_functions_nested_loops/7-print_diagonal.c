#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a diagonal line in the terminal
 * @n: number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
{
	for (a = 0; a < n; a++)
{
	for (b = 0; b < n; b++)
{
	if (a == b)
{
	_putchar(92);
	_putchar('\n');
}
	else
		_putchar(' ');
}
}
_putchar('\n');
}
}
