#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of lines
 * Return: n
 */
void print_line(int n)
{
	int a;

	if (n > 0)
{
	for (a = 0; a < n; a++)
{
	_putchar(95);
}
	_putchar('\n');
}
	else
{
	_putchar('\n');
}
}
