#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal line in the terminal
 * @n:is the number of times the character \ should be printed
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
