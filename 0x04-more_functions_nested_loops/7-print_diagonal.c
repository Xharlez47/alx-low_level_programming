#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of lines
 * Return: n
 */
void print_line(int n)
{
	int a, b;

	if (n > 0)
{
	for (a = 0; a < n; a++)
{
	for (b = 0; b < n; b++)
{
		_putchar(' ');
}
	_putchar('\\');
	if (a == (n-1))
{
	continue;
}
	_putchar('\n');
}
}
putchar('\n');
}
