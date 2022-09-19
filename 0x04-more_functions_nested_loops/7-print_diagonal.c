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

	n = 12;
	for (a = 0; a < n; a++)
{
	for (b = 0; b < n; b++)
{
	if (a == b)
{
		_putchar('\\');
}
	else
		_putchar(' ');
	if (n <= 0)
{
		_putchar('\n');
}
}
	_putchar('\n');
}
}
